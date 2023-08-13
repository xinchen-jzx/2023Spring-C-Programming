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
			cout<<"�ɼ��������!"<<endl;
			return false;
		}
	}
	return true;

}

int main(){
	student s1, s2;
	cout<<"������ѧ��1�ĳɼ���"<<endl;
	cin>>s1.grade[0]>>s1.grade[1]>>s1.grade[2]>>s1.grade[3]>>s1.grade[4];
	cout<<"������ѧ��2�ĳɼ���"<<endl;
	cin>>s2.grade[0]>>s2.grade[1]>>s2.grade[2]>>s2.grade[3]>>s2.grade[4];
	
	if(checkGrade(s1) && checkGrade(s2))
	{
		cout<<"ѧ��1��ƽ��ֵ��:"<<ave(s1)<<";"<<"ѧ��1�ķ�����:"<<var(s1, ave(s1))<<endl;
		cout<<"ѧ��2��ƽ��ֵ��:"<<ave(s2)<<";"<<"ѧ��2�ķ�����:"<<var(s2, ave(s2))<<endl;
	}

	return 0;
}