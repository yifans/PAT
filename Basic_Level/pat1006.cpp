#include <iostream>
using namespace std;

int main(){
	int input_num;
	cin >> input_num;
	
	int bit_num[] = {0,0,0};
	
	for(int i = 2;i >= 0;i--)
	{
		bit_num[i] = input_num % 10;
		input_num /= 10;
	}
	
	for(int i = 0;i < bit_num[0];i++)
	{
		cout << 'B';
	}
	
	for(int i = 0;i < bit_num[1];i++)
	{
		cout << 'S';
	}
	
	for(int i = 1;i <= bit_num[2];i++)
	{
		cout << i;
	}
	return 0;
}
