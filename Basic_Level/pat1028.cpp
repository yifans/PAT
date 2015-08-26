#include <iostream>
using namespace std;

typedef struct{
	string name;
	int year;
	int month;
	int day;
}record;

int isOlder(record a,record b)
{
	if(a.year < b.year) return 1;
	else if(a.year == b.year)
	{
		if(a.month < b.month) return 1;
		else if(a.month == b.month) 
		{
			if(a.day < b.day) return 1;
			else return 0;
		}
		else return 0;
	}
	else return 0;
}

int isYounger(record a,record b)
{
	if(a.year > b.year) return 1;
	else if(a.year == b.year)
	{
		if(a.month > b.month) return 1;
		else if(a.month == b.month) 
		{
			if(a.day > b.day) return 1;
			else return 0;
		}
		else return 0;
	}
	else return 0;
}

int isLegal(record a)
{
	record limit_up={"e",1814,9,6};
	record limit_down={"e",2014,9,6};
	if(isYounger(a,limit_down)) return 0;
	if(isOlder(a,limit_up)) return 0;
	return 1;
}

int main(){
	
	
	int n;
	cin >> n;
	int count = 0;
	
	record re_max,re_min;
	re_max = {"e",2014,9,6};
	re_min = {"e",1814,9,6};
	for(int i = 0;i < n;i++)
	{
		record temp;
		cin >> temp.name;
		scanf("%d/%d/%d",&temp.year,&temp.month,&temp.day);
		
		if(isLegal(temp)) count++;
		else continue;
		
		if(isYounger(re_max,temp))
			re_max = temp;
		if(isOlder(re_min,temp))
			re_min = temp;
	}
	
	if(count > 0) cout << count << " " << re_max.name << " "<< re_min.name;
	else cout << count;
	
	return 0;	
}
