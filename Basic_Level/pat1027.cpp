#include <iostream>
using namespace std;

int main(){
	int n = 1,m;
	char a;
	cin >> m >> a;
	
	while(2 * n * n - 1 <= m) n++;
	n--;
	int rest = m - (2 * n * n - 1);
	int lineSize = 2 * n - 1;
	
	for(int i = n;i > 0;i--)
	{
		for(int j = 0;j < (lineSize - (2 * i - 1))/2;j++)
			cout << " ";
		for(int j = 0;j < 2 * i - 1;j++)
			cout << a;
		cout << endl;
	}
	for(int i = 2;i <= n;i++)
	{
		for(int j = 0;j < (lineSize - (2 * i - 1))/2;j++)
			cout << " ";
		for(int j = 0;j < 2 * i - 1;j++)
			cout << a;
		cout << endl;		
	}
	cout << rest;
	return 0;
}
