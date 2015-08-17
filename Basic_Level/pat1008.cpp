#include <iostream>
using namespace std;

void Reverse(int *a,int c)
{
	for(int i =0;i < c / 2;i++)
	{
		int temp = a[i];
		a[i] = a[c - i - 1];
		a[c - i - 1] = temp;
	}
}

int main(){
	int m,n;
	cin >> n;
	cin >> m;
	m = m % n;
	int a[n];
	
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];	
	}
	
	Reverse(a,n);
	Reverse(a,m);
	Reverse(a + m,n - m);
	
	cout << a[0];
	for(int i = 1;i < n;i++)
	{
		cout << " " << a[i];
	}
	
	return 0;
}
