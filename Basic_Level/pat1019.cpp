#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Kaprekar(int s)
{
	if(s == 6174 || s == 0) return 0;
	
	vector<int> a = {0,0,0,0};
	for(int i = 3;i >= 0;i--)
	{
		a[i] = s % 10;
		s /= 10;
	}	
	sort(a.begin(),a.end());
	int aa = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
	int bb = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
	int cc = aa - bb;
	printf("%04d - %04d = %04d\n",aa,bb,cc);
	
	Kaprekar(cc);
	
	return 0;
}
int main()
{
	int in;
	cin >> in;
	if(in == 6174) cout << "7641 - 1467 = 6174";
	else Kaprekar(in);
	return 0;
}
