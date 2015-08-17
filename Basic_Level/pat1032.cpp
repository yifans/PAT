#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int school;
	int score;
	
	int score_total[100000] = {0};
	for(int i = 0;i < n;i++)
	{
		cin >> school >> score;
		score_total[school] += score;
	}
	
	int max_score = 0;
	int max_school = 0;
	for(int i = 0;i < 100000;i++)
	{
		if(score_total[i] > max_score)
		{
			max_score = score_total[i];
			max_school = i;
		}
	}
	
	cout << max_school << " "<< max_score;
	return 0;
}
