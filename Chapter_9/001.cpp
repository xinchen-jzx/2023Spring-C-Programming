#include <iostream>
#include <string.h>
using namespace std;

struct node
{
    string name;
    string num;
    double grade_english=0;
    double grade_math=0;
    node * next;
};

node * creat_list(int n,string *names,string *nums,double *english,double *math);
node * find_hight(node *);
node * find_lowes(node *);

int main(){

    int n;
    cout<<"请输入人数"<<endl;
    cin>>n;
	node * head=NULL;
	head=new node;
	string *nums=new string[n];
	string * names=new string[n];
	double * english=new double[n];
	double * math=new double[n];
	cout<<"请输入姓名，学号，英语成绩，数学成绩"<<endl;
	for(int i=0;i<n;i++){
		cin>>names[i];
		cin>>nums[i];
		cin>>english[i];
		cin>>math[i];
	}
	head=creat_list(n,names,nums,english,math);
	node *stuh=find_hight(head);
	node *stul=find_lowes(head);
	cout<<stuh->name<<" "<<stuh->num<<" "<<(stuh->grade_english + stuh->grade_math)/2<<endl;
	cout<<stul->name<<" "<<stul->num<<" "<<(stul->grade_english + stul->grade_math)/2<<endl;
    return 0;
}
node * creat_list(int n,string *names,string *nums,double *english,double *math){
	node *head,*p0,*p1;
	int i=0;
	head=p0=p1=new node;
	p0->name=names[0];
	p0->num=nums[0];
	p0->grade_english=english[0];
	p0->grade_math=math[0];
	for(i=1;i<n;i++){
		p0=new node;
		p0->name=names[i];
		p0->num=nums[i];
		p0->grade_english=english[i];
		p0->grade_math=math[i];
		p1->next=p0;
		p1=p0;
	}
	p1->next=NULL;
	return head;	
}

node * find_hight(node *head){
	node *p,*p0,*p1;
	p=head;
	p0=p->next;
	p1=p;
	while(p0!=NULL){
		if((p1->grade_math+p1->grade_english)<(p0->grade_math+p0->grade_english)){
			p1=p0;
		}
		p0=p0->next;
	}
	return p1;
}

node * find_lowes(node *head){
	node *p,*p0,*p1;
	p=head;
	p0=p->next;
	p1=p;
	while(p0!=NULL){
		if((p1->grade_math+p1->grade_english)>(p0->grade_math+p0->grade_english)){
			p1=p0;
		}
		p0=p0->next;
	}
	return p1;
}
/*
输入
3
aaa
1
10 60
bbb
2
50 70
ccc
3
90 100
输出
ccc 3 95
aaa 1 35
*/
