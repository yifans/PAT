#include <iostream>
using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	
	for(char c : b)
	{
		bool flag = true;
		if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||(c >= '0' && c <= '9')||
		    c == '_' || c == ',' || c == '.' || c == '-' || c == '+'))
		    continue;
		for(char d : a)
		{
			if(a == "")
			{
				break;
			}
			if(c == '+')
			{
				flag = false;
				break;
			}
			else
			if((c == '_' || c == ',' || c == '.' || c == '-' || (c >= '0' && c <= '9')) && (d == c))
			{
				flag = false;
				break;
			}
			else
			if(c >= 'a' && c <= 'z' && ((c - 'a') == (d - 'A')) )
			{
				flag = false;
				break;
			}
			else
			if(c >= 'A' && c <= 'Z' && (d == '+' || d == c))
			{
				flag = false;
				break;
			}
			else
			flag = true;
		}
		if(flag == true) cout << c;
	}
	return 0;
}
