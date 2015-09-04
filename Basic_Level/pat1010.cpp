#include <iostream>
#include <vector>
using namespace std;


typedef struct{
	int n;
	int e;
}node;

int main(){
	vector<node> a;
	node temp;
	
	while(cin >> temp.n >> temp.e){
		a.push_back(temp);
	}
	for(int i = 0;i < a.size();i++)
	{
		a[i].n = a[i].n * a[i].e;
		a[i].e = a[i].e - 1; 
	}
	
	int flag = 0;
	for(int i = 0;i < a.size() && a[i].n != 0;i++)
	{
		if(flag == 0)
		{
			cout << a[i].n << " " << a[i].e;
			flag = 1;
		}
		else
		{
			cout << " " << a[i].n << " " << a[i].e;
		}
	}
	
	if(flag == 0) cout << "0 0";
			
	return 0; 
}
