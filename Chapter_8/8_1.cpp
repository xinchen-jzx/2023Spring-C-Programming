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

	if(((x.year%4==0 && x.year%100!=0) ||x.year%400==0))  //�����꣬��29��
		a[1]=29;
	if(x.day > a[x.month-1]) 
		cout<<"�����ֻ��"<<a[x.month-1]<<"��"<<endl;
	else
	{
		for(int i=0; i<x.month-1; i++)
			sum+=a[i]; 
		cout<<x.year<<"��"<<x.month<<"��"<<x.day<<"����"<<x.year<<"��ĵ�"<<sum<<"��"<<endl;
	}
}
 
int main()
{
	struct Date d;
	cin>>d.year>>d.month>>d.day;  // ����������
	
	if(d.day>30 || d.day<0 || d.month<0 || d.month>12 || d.year<=0)  //�����ж��������ȷ��
		cout<<"��������ȷ�������ձ�ʾ����"<<endl;
	else
		day(d);

	return 0;
}
  