#include <iostream>
using namespace std;

int main(){
	int a[10];
	for(int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	
	int flag = 0;
	if(a[0] != 0) flag = 1;
	
	for(int i = 1;i < 10;i++)
	{
		if(a[i] == 0)
			continue;
		else
		{
			if(flag == 1)
			{
				cout << i;
				for(int j = 0;j < a[0];j++)
					cout << "0";
				for(int j = 0;j < a[i] - 1;j++)
					cout << i;
				flag = 0;
			}
			else
			{
				for(int j = 0;j < a[i];j++)
					cout << i;
			}
		}
	}
	return 0;
}
