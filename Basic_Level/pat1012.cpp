#include <iostream>
using namespace std;

int main(){
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a5 = 0;
	double a4 = 0.0;
	int flag[5] = {0}; 
	
	int n;
	cin >> n;
	int a[n];
	
	for(int i =0;i < n;i++)
	{
		cin >> a[i];
	}		
	
	int flag2 = 1,count4 = 0;
	for(int i = 0;i < n;i++)
	{
		int temp = a[i] % 5;
		//a1
		if(temp == 0 && a[i] % 2 == 0) 
		{
			a1 += a[i];
			flag[0] = 1;
		}
		//a2
		if(temp == 1)
		{
			a2 = a2 + ((flag2 % 2 == 1) ? a[i] : -1 * a[i]);
			flag2++;
			flag[1] = 1;
		}
		//a3
		if(temp == 2)
		{
			a3++;
			flag[2] = 1;
		}
		//a4
		if(temp == 3)
		{
			a4 += a[i];
			count4++;
			flag[3] = 1;
		}
		//a5
		if(temp == 4)
		{
			if(a[i] > a5) a5 = a[i];
			flag[4] = 1;
		}		 
	}
	
	if(flag[0] == 1) cout << a1 << " "; else cout << "N ";
	if(flag[1] == 1) cout << a2 << " "; else cout << "N ";
	if(flag[2] == 1) cout << a3 << " "; else cout << "N ";
	if(flag[3] == 1) printf("%.1f ",a4/count4); else cout << "N ";
	if(flag[4] == 1) cout << a5; else cout << "N";
	
	return 0; 
}
