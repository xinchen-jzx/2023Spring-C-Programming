#include <iostream>
using namespace std;
void swap_Stu(int num[],int stu_gra[],int n);
int main()
{
	int n;
	cout<<"学生人数:"; 
	cin>>n;
	int *num = new int[n];
	int *stu_gra = new int[n];
	if(num==NULL || stu_gra==NULL){
		cout<<"error"<<endl;
		return 0;
	}
	cout<<"请按行输入所有学生的学号和成绩"<<endl;
	for(int i=0;i<n;i++){
		cin>>num[i]>>stu_gra[i];
	}
	swap_Stu(num,stu_gra,n);
	while(1){
		cout<<"请输入需查找的名次:";
		cin>>n;
		if(n==-1){
			break;
		}else{
			cout<<num[n-1]<<' '<<stu_gra[n-1]<<endl;
		}		
	}
	cout<<"Over!";
	free(num);
	free(stu_gra);
	return 0;
}
void swap_Stu(int num[],int stu_gra[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(stu_gra[j]>stu_gra[i]){
				int m=stu_gra[i];
				stu_gra[i]=stu_gra[j];
				stu_gra[j]=m;
				m=num[i];
				num[i]=num[j];
				num[j]=m;
			}else if(stu_gra[i]==stu_gra[j]){
				if(num[i]>num[j]){
					int m=stu_gra[i];
					stu_gra[i]=stu_gra[j];
					stu_gra[j]=m;
					m=num[i];
					num[i]=num[j];
					num[j]=m;					
				}
			}
		}
	}
}
