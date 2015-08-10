#include <iostream>
#include <vector>
#include <string> 

using namespace std;
using std::string;
using std::vector;

//输入为一个整形数字，输出其对应的汉字 
int flag = 0;
void print_number(int sum)
{
	string hanzi[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
	if(flag == 0)
	{
		cout << hanzi[sum];
		flag = 1;
	}
	else
	{
		cout << " " << hanzi[sum];
	}
}

//将输出按位拆开
void print_sum(int sum)
{	
	vector<int> bit_int_sum;
	while(sum > 0)
	{
		int i = sum % 10;
		sum /= 10;
		bit_int_sum.push_back(i);
	}
	for(vector<int>::reverse_iterator r_iter = bit_int_sum.rbegin(); r_iter != bit_int_sum.rend(); ++r_iter)//逆序
	{  
    	print_number(*r_iter);
	}  	
}

//主函数
int main()
{
	string s;
	int sum = 0;
	cin >> s;
	for(auto c : s)
	{
		sum += (c - '0');
	}
	print_sum(sum);
	return 0;
}
