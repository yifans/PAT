#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[101] = {0};
	
	int temp;
	for(int i = 0;i < n;i++)
	{
		cin >> temp;
		num[temp]++;
	}

	int k;
	cin >> k;
	int check[k];
	for(int i = 0;i < k;i++)
	{
		cin >> check[i];
	}
	
	for(int i = 0;i < k;i++)
	{
		if(i == 0) cout << num[check[i]];
		else cout << " " << num[check[i]];
	}
	return 0;
}
