#include <iostream>
using namespace std;

int main(){
	string a;
	int b,r;
	
	cin >> a >> b;
	
	int temp = 0;
	int m = 0;
	int rest = a[0] - '0';
	if(a.length() == 1)
	{
		cout << (a[0] - '0') / b << " " << (a[0] - '0') % b;
		return 0;
	}
	else
	{
		for(int i = 1;i < a.length();i++)
		{
			temp = rest * 10 + (a[i] - '0');
			m = temp / b;
			rest = temp - b * m;
			cout << m;
		}
		r = rest;
	}
		
	cout << " " << r;
	
	return 0; 
}
