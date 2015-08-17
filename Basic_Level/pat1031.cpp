#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int flag = 0;
	
	int w[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[] = {'1','0','X','9','8','7','6','5','4','3','2'};
	string a[n];
	
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	
	for(int i = 0;i < n;i++)
	{
		int sum = 0;
		int check = 0;
		for(int j = 0;j < 17;j++)
		{
			if(a[i][j] <= '9' && a[i][j] >= '0')
			{
				sum += (a[i][j] - '0') * w[j];
			}
			else
			{
				check = 1;
				break;
			}
		}
		sum %= 11;
		if( check == 1 || a[i][17] != M[sum])
		{
			cout << a[i] << endl;
			flag++;
		}
	}
	
	if(flag == 0) cout << "All Passed" << endl;
	
	return 0; 
}
