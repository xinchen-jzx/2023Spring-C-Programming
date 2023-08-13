#include<iostream>
using namespace std;
double average(int *s1);
double variance(int *s,double ave);
int main()
{
	int s1[5]={50,100,55,96,80},s2[5]={78,80,82,74,72};
	double s1_average=average(s1),s2_average=average(s2);
	double s1_variance=variance(s1,s1_average),s2_variance=variance(s2,s2_average);
	cout<<"student1:average="<<s1_average<<" variance="<<s1_variance<<endl;
	cout<<"student1:average="<<s2_average<<" variance="<<s2_variance<<endl;
	return 0;
}

double average(int *s)
{
	double sum=0;
	for(int i=0;i<5;i++){
		sum+=s[i];
	}
	return sum/5.0;
}

double variance(int *s,double ave)
{
	double sum=0;
	for(int i=0;i<5;i++){
		sum+=(s[i]-ave)*(s[i]-ave);
	}
	return sum/5.0;
}
