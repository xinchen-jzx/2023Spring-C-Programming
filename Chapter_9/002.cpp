#include<iostream>
using namespace std;

struct score{
	int x;
	score *next;
};
score * creat_list(int n,int *num);
score * merage(score *s1,score *s2);
void print_list(score *head);
int main(){
	cout<<"请输入链表1的长度"<<endl;
	int n1=0;
	cin>>n1;
	cout<<"请输入链表2的长度"<<endl;
	int n2=0;
	cin>>n2;
	score *head1,*head2;
	int *num1=new int[n1];
	int *num2=new int[n2];
	cout<<"请输入链表1"<<endl;
	for(int i=0;i<n1;i++){
		cin>>num1[i];
	}
	cout<<"请输入链表2"<<endl;
	for(int i=0;i<n2;i++){
		cin>>num2[i];
	}
	head1=creat_list(n1,num1);
	head2=creat_list(n2,num2);
	print_list(head1);
	print_list(head2);
	score*head3=merage(head1,head2);
	print_list(head3);
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
score * merage(score *head1,score *head2){
	score *tmp1 = head1;
	score *tmp2 = head2;
	score *newHead = NULL;
	score *newTail = NULL;
	while (tmp1 != NULL || tmp2 != NULL)
	{
		if (tmp1 != NULL && (tmp2 == NULL || tmp1->x < tmp2->x))
		{
			if (newHead == NULL)
			{
				newHead = tmp1;
			}
			else
			{
				newTail->next = tmp1;
			}
			newTail = tmp1;
			tmp1 = tmp1 ->next;
		}
		else
		{
			if (newHead == NULL)
			{
				newHead = tmp2;
			}
			else
			{
				newTail->next = tmp2;
			}
			newTail = tmp2;
			tmp2 = tmp2 ->next;
		}
	}
	return newHead;
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
	7
	5
	1 2 3 4 5 6 7
	1 2 3 4 5
*/
