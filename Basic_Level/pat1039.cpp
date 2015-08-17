#include <iostream>
using namespace std;

int main(){
	string sell,buy;
	cin >> sell >> buy;
	int a[128] = {0};
	int r = 0;
	
	for(char c : sell)
	{
		a[c]++;
	}
	int flag = 0;
	for(char c : buy)
	{
		a[c]--;
		if(a[c] < 0)
		{
			flag = 1;
			r++;
		}
	}
	
	if(flag)
	{
		cout << "No" << " "<< r;
	}
	else
	{
		cout << "Yes" << " "<< sell.size() - buy.size();
	}
	
	return 0;
	
}
