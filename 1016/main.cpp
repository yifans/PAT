#include <iostream>
using namespace std;

int main(){
	string a, b;
	char da, db;
	int pa = 0, pb = 0;
	int na = 0, nb = 0;
	
	cin >> a >> da >> b >> db;
	
	for(char c : a)
	{
		if(c == da) na++;
	}
	for(char c : b)
	{
		if(c == db) nb++;
	}
	
	for(int i = 0;i < na;i++)
	{
		pa = (pa * 10 + (da - '0'));
	}
	
	for(int i = 0;i < nb;i++)
	{
		pb = (pb * 10 + (db - '0'));
	}
	
	cout << pa + pb;
	return 0; 
}
