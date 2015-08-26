#include <iostream>
using namespace std;

typedef struct{
	char jia;
	char yi;
	int result;//1:jia win; 2:ping; 3:yi win;
}ju;

int res(ju s)
{
	if(s.jia == s.yi) return 2;
	else if(( s.jia == 'J' && s.yi == 'B' ) ||
			( s.jia == 'B' && s.yi == 'C' ) ||
			( s.jia == 'C' && s.yi == 'J' )
	) return 1;
	else return 3;
}

int Max_two(int a,int b)
{
	if(a > b) return a;
	else return b;
}

int Max_three(int a,int b,int c)
{
	return Max_two(Max_two(a,b),c);
}

char win_shoushi(int a[3])
{
	int shoushi_max = Max_three(a[0],a[1],a[2]);
	if(shoushi_max == a[0]) return 'B';
	else
	if(shoushi_max == a[1]) return 'C';
	else				   return 'J';
}

int main()
{
	int n;
	cin >> n;
	ju input[n];
	
	int jia_win_count = 0;
	int yi_win_count = 0;
	int ping_count = 0;
	
	int jia_shoushi[3] = {0};//B,C,J
	int yi_shoushi[3] = {0};
	for(int i = 0;i < n;i++)
	{
		cin >> input[i].jia >> input[i].yi;
		input[i].result = res(input[i]);
		
		if(input[i].result == 1)
		{
			jia_win_count++;
			if(input[i].jia == 'B') jia_shoushi[0]++;
			else 
			if(input[i].jia == 'C') jia_shoushi[1]++;
			else
			if(input[i].jia == 'J') jia_shoushi[2]++;
		}
		else
		if(input[i].result == 3)
		{
			yi_win_count++;
			if(input[i].yi == 'B') yi_shoushi[0]++;
			else 
			if(input[i].yi == 'C') yi_shoushi[1]++;
			else
			if(input[i].yi == 'J') yi_shoushi[2]++;
		}
		else
		{
			ping_count++;
		}
	}
	
	cout << jia_win_count << " " << ping_count << " " << yi_win_count << endl;
	cout << yi_win_count << " " << ping_count << " " << jia_win_count << endl;
	cout << win_shoushi(jia_shoushi) << " " << win_shoushi(yi_shoushi) << endl;

	return 0;
}
