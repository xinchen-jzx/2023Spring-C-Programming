#include<iostream>
using namespace std;

void day(struct Date);
struct Date
{
	int year;
	int month;
	int day;
};

void day(struct Date x)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	int sum=x.day;

	if(((x.year%4==0 && x.year%100!=0) ||x.year%400==0))  //是闰年，有29天
		a[1]=29;
	if(x.day > a[x.month-1]) 
		cout<<"这个月只有"<<a[x.month-1]<<"天"<<endl;
	else
	{
		for(int i=0; i<x.month-1; i++)
			sum+=a[i]; 
		cout<<x.year<<"年"<<x.month<<"月"<<x.day<<"日是"<<x.year<<"年的第"<<sum<<"天"<<endl;
	}
}
 
int main()
{
	struct Date d;
	cin>>d.year>>d.month>>d.day;  // 输入年月日
	
	if(d.day>30 || d.day<0 || d.month<0 || d.month>12 || d.year<=0)  //初步判断输入的正确性
		cout<<"请输入正确的年月日表示方法"<<endl;
	else
		day(d);

	return 0;
}
  