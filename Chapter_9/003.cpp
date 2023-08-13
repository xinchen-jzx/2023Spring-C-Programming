#include<iostream>
using namespace std;

struct score{
	int x;
	score *next;
};
score * creat_list(int n,int *num);
void delete_list(score * head);
void print_list(score *head);
int main(){
	cout<<"请输入链表的长度"<<endl;
	int n1=0;
	cin>>n1;
	score *head1;
	int *num1=new int[n1];
	cout<<"请输入链表"<<endl;
	for(int i=0;i<n1;i++){
		cin>>num1[i];
	}
	head1=creat_list(n1,num1);
	print_list(head1);
	delete_list(head1);
	print_list(head1);
	return 0;
}
score * creat_list(int n,int *num){
	score *head,*p0,*p1;
	head=p0=p1=new score;
	p0->x=num[0];
	for(int i=1;i<n;i++){
		p0=new score;
		p0->x=num[i];
		p1->next=p0;
		p1=p0;
	}
	p1->next=NULL;
	return head;
}

void delete_list(score * head){
	score * p=head;
	while(p->next!=NULL){
		if(p->x!=p->next->x){
			p=p->next;
		}else{
			if(p->next->next!=NULL){
				p->next=p->next->next;
			}else{
				p->next=NULL;
			}
		}
	}
}

void print_list(score *head){
	score *p=head;
	while(p!=NULL){
		cout<<p->x<<" ";
		p=p->next;
	}
	cout<<endl;
}
/*
	14
	1 1 2 3 3 4 5 5 6 6 6 7 7 7
*/
