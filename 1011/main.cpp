#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long a[n],b[n],c[n];
	
	for(int i = 0;i < n;i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}
	
	for(int i = 0;i < n;i++)
	{
		cout << "Case #" << i+1 << ": ";
		if(a[i] + b[i] > c[i])
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	
	return 0;
}
