//abc_problem.cpp: (1)打印“Enter two numbers”,(2)将输入的两个数读入变量a与b中,(3)将变量a和b的乘积赋给变量c,(4)打印“a*b=”并加上变量c的值
#include<iostream.h>
int main()
{
	cout<<"Enter two numbers"<<endl;//(1)
	float a;
	float b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;//(2)
	float c=a*b;//(3)        赋值语句
	cout<<"a*b="<<c<<endl;//(4)
	return 0;
}

