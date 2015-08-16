#include <iostream>
using namespace std;

int main(){
	int g,s,k;
	int gg,ss,kk;
	scanf("%d.%d.%d %d.%d.%d",&g,&s,&k,&gg,&ss,&kk);
	
	int t = g * 17 * 29 + s * 29 + k;
	int tt = gg * 17 * 29 + ss * 29 + kk;
	
	int z = tt - t;
	if(z < 0)
	{
		cout << "-";
		z = -z;
	}
	int zg = z / 29 /17;
	int zs = (z - 17 * 29 * zg) / 29;
	int zk = z - 17 * 29 * zg - 29 * zs;
	
	printf("%d.%d.%d",zg,zs,zk);
	
	return 0; 
}
