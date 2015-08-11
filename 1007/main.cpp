#include <iostream>
#include <math.h>
using namespace std;

int isPrimer(int a)
{
	for(int i = 2;i <= sqrt(a);i++)
	{
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int input;
	int count = 0;
	cin >> input;
	
	for(int i = 4;i <= input;i++)
	{
		if(isPrimer(i) && isPrimer(i - 2)) {
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
