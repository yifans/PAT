#include <iostream>
#include <vector>
using namespace std;

void aPrint(vector<char> a)
{
	for(int i = a.size() - 1;i >= 0;i--)
	{
		cout << a[i];
	}
}

int main()
{
	string input;
	getline(cin,input);
	
	vector<char> temp[80];
	int count = 0;
	for(int i = input.size() - 1;i >= 0;i--)
	{
		char a = input[i];
		
		if(a != ' ')
		{
			temp[count].push_back(a);
		}
		else
		{
			aPrint(temp[count]);
			cout << " ";
			count++;
		}
	}
	aPrint(temp[count]);
	return 0;	
}
