#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string a[4];
	for(int i = 0;i < 4;i++)
	{
		cin >> a[i];
	}
	
	string week[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	
	short day;
	short hour;
	short minite;
	
	int count = 1;
	for(int i = 0;i < a[0].length() && a[1].length();i++)
	{	
		if(a[0][i] == a[1][i] && a[0][i] >= 'A' && a[0][i] <= 'G' && count == 1)
		{
			day = a[0][i] - 'A';
			cout << week[day] << " ";
			count++;
			continue;
		}
		if(	(a[0][i] == a[1][i] && a[0][i] >= 'A' && a[0][i] <= 'N' && count == 2) ||
			(a[0][i] == a[1][i] && a[0][i] >= '0' && a[0][i] <= '9' && count == 2))
		{
			if(a[0][i] >= 'A' && a[0][i] <= 'N')
			{
				hour = a[0][i] - 'A' + 10;
			}
			if(a[0][i] >= '0' && a[0][i] <= '9')
			{
				hour = a[0][i] - '0';
			}			
			if(hour > 9) cout << hour << ":";
			else cout << "0" << hour << ":";
			break;
		}
	}
	for(int i = 0;i < a[2].length() && a[3].length();i++)
	{
		if(	(a[2][i] == a[3][i] && a[2][i] >= 'a' && a[2][i] <= 'z') ||
			(a[2][i] == a[3][i] && a[2][i] >= 'A' && a[2][i] <= 'Z'))
		{
			if(i > 9) cout << i;
			else cout << "0" << i;
		}
	}
	return 0;
}
