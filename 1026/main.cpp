#include <iostream>
using namespace std;

int main(){
	int c1,c2;
	cin >> c1 >> c2;
	int time = (c2 - c1) / 100;
	if((c2 - c1) % 100 >= 50) time++;
	
	int shi,fen,miao;
	
	shi = time / 3600;
	fen = (time - 3600 * shi) / 60;
	miao = time - 3600 * shi - 60*fen;
	
	printf("%02d:%02d:%02d\n",shi,fen,miao);
	return 0;
}
