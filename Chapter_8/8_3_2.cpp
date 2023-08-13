#include<iostream>
#include<String.h>
using namespace std;

struct student
{
    char name[30];
    char id[4];
    float grade;
    int rk;
};


student* sort(struct student *stu, int n)
{
    student *stu_sort  = stu;
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(stu_sort[j].grade < stu_sort[j+1].grade)
            {
                struct student temp = stu_sort[j];
                stu_sort[j] = stu_sort[j+1];
                stu_sort[j+1] = temp;
            }
        }
    }
    for(int k=0; k<n; k++)
    {
         stu_sort[k].rk = k+1;
    }
    return stu_sort;
}


int main()
{
    int n;
    cout<<"请输入学生的个数："<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"over!"<<endl;
        return 0;
    }
    else
        cout<<"请按行输入学生姓名(小于30)以及成绩:"<<endl;

    student *stu = new student[n];
    for(int num=0; num<n; num++)
    {
        cin>>stu[num].id>>stu[num].name>>stu[num].grade;
        if(stu[num].grade>100 || stu[num].grade<0)
        {
            cout<<"输入有误!"<<endl;
            return 0;
        }
    }
    struct student *stu_sort = sort(stu, n);
    int num_1=0, num_2=0;
    while(num_1<n)
    {
        cout<<stu_sort->rk<<" ";
        char *p = &(*stu_sort->name);
        while(*p)
        {
            cout<<*p;
            p++;
        }
        cout<<" ";
        char *p_1 = &(*stu_sort->id);
        while(*p_1)
        {
            cout<<*p_1;
            p_1++;
        }
        cout<<" ";
        cout<<stu_sort->grade<<endl;
        stu_sort++;
        num_1++;
    }

    return 0;
}