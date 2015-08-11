#include <iostream>
#include <string> 

using namespace std;

typedef struct{
	string name;
	string id;
	int grade;
} stu;


int main(){
	int stu_num;
	cin >> stu_num;
	
	stu max,min,temp;
	max.grade = 0;
	min.grade = 100;
	
	for(int i = 0;i < stu_num;i++){			
		cin >> temp.name;
		cin >> temp.id;
		cin >> temp.grade;
		
		if(temp.grade > max.grade){
			max.name = temp.name;
			max.id = temp.id;
			max.grade = temp.grade;
		}
		if(temp.grade < min.grade){
			min.name = temp.name;
			min.id = temp.id;
			min.grade = temp.grade;
		}
	}
	
	cout << max.name << " " << max.id << endl;
	cout << min.name << " " << min.id << endl;
		
	return 0;
}
