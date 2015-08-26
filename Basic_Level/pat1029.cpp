#include <iostream>
using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	bool flag[128] = {false};
	
	for(char c : a)
	{
		bool temp = false;
		for(char d : b)
		{
			if(c == d)
			{
				temp = true;
				break;
			}
		}
		if(c >= 'a' && c <= 'z') c = c - 'a' + 'A';
		if(temp == false && flag[c] == false)
		{
			flag[c] = true;
			cout << c;
		}
	}
	return 0;
}
