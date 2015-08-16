#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	char a;
	cin >> a;
	
	for(int i = 0;i < n;i++) 
		cout << a;
	cout << endl;
	for(int i = 0;i < ((n + 1) / 2 -2);i++)
	{
		cout << a;
		for(int j = 0;j < (n -2);j++)
			cout << " ";
		cout << a << endl;	
	}
	for(int i = 0;i < n;i++) 
		cout << a;
		
	return 0;
}
