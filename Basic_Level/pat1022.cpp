#include <iostream>
#include <vector>
using namespace std;

int main(){
	long a,b,d,t;
	cin >> a >> b >> d;
	t = a + b;
	if(t == 0)
	{
		cout << '0';
		return 0;
	}
	vector<int> r;
	
	int temp;
	while(t)
	{
		temp = t % d;
		r.push_back(temp);
		t = t / d;
	}

	for(int i = r.size() - 1;i >= 0;i--)
	{
		cout << r[i];
	}
	return 0;
}
