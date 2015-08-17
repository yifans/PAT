#include <iostream>
using namespace std;

int main(){
	string a;
	cin >> a;
	
	int num[10] = {0};
	for(char c : a)
	{
		num[c - '0']++;
	}
	for(int i = 0;i < 10;i++)
	{
		if(num[i] != 0) cout << i << ":" << num[i] << endl;
	}
	return 0; 
}
