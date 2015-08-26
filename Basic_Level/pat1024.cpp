#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	char sign1,sign2;	
	int zhishu = 0;
	
	//find 'E'
	int mark_e = 0;
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] == 'E') mark_e = i;
	}
	
	sign1 = s[0];
	sign2 = s[mark_e + 1];
	
	for(int i = mark_e + 2;i < s.length();i++)
	{
		zhishu = zhishu * 10 + (s[i] - '0');
	}
	
	if(sign1 == '-') cout << '-';
	
	
	if(zhishu == 0)
	{
		for(int i = 1;i < mark_e;i++)	cout << s[i];
	}
	else
	if(sign2 == '-')
	{
		cout << "0" << ".";
		for(int i = 0;i < zhishu - 1;i++) cout << "0";
		cout << s[1];
		for(int i = 3;i < mark_e;i++) cout << s[i];
	}
	else
	{
		if(zhishu < mark_e - 3)
		{
			cout << s[1];
			for(int i = 3;i < zhishu + 3;i++) cout << s[i];
			cout << ".";
			for(int i = zhishu + 3;i < mark_e;i++) cout << s[i];
		}
		else
		{
			cout << s[1];
			for(int i = 3;i < mark_e;i++) cout << s[i];
			for(int i = 0;i < zhishu - (mark_e - 3);i++) cout << "0";
		}
	}
	
	return 0;
}
