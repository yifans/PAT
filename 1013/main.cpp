#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int isPrimer(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	
	int M, N;
	cin >> M >> N;
	
	int begin = 2;
	int count = 0;
	vector<int> result;

	while(1)
	{
		if(isPrimer(begin))
		{
			count++;
			if(count <= N && count >= M) result.push_back(begin);
			if(count > N) break;
			begin++;
		}
		else
		{
			begin++;
		}
	}
	
	int flag = 1;
	for(int i : result) 
	{
		if(flag % 10 == 1) cout << i;
		else
		{
			if(flag % 10 == 0) cout << " " << i << endl;
			else cout << " " << i;
		}
		flag++;
	}
	return 0;
}
