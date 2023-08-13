#include<iostream>
#include<math.h>
using namespace std;

float ave(struct student);
float var(struct student, float);
bool checkGrade(struct student);
struct student
{
	float grade[5];
};


float ave(struct student stu)
{
	float sum = 0;
	for(int i=0; i<5; i++)
		sum += stu.grade[i];
	return sum/5.0;
}

float var(struct student stu, float ave)
{
	float sum = 0;
	for(int j=0; j<5; j++)
		sum = (ave-stu.grade[j])*(ave-stu.grade[j]) + sum;
	return sum/5.0;
}

bool checkGrade(struct student stu)
{
	for(int i=0; i<5; i++)
	{
		if(stu.grade[i]>=0 && stu.grade[i]<=100)
			continue;
		else
		{
			cout<<"成绩输入错误!"<<endl;
			return false;
		}
	}
	return true;

}

int main(){
	student s1, s2;
	cout<<"请输入学生1的成绩："<<endl;
	cin>>s1.grade[0]>>s1.grade[1]>>s1.grade[2]>>s1.grade[3]>>s1.grade[4];
	cout<<"请输入学生2的成绩："<<endl;
	cin>>s2.grade[0]>>s2.grade[1]>>s2.grade[2]>>s2.grade[3]>>s2.grade[4];
	
	if(checkGrade(s1) && checkGrade(s2))
	{
		cout<<"学生1的平均值是:"<<ave(s1)<<";"<<"学生1的方差是:"<<var(s1, ave(s1))<<endl;
		cout<<"学生2的平均值是:"<<ave(s2)<<";"<<"学生2的方差是:"<<var(s2, ave(s2))<<endl;
	}

	return 0;
}