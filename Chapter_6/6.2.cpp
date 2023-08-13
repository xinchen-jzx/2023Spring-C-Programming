#include<iostream>
using namespace std;
void sort(int *s,int n);
void array_Cout(int *s,int n);
int binary_Search(int *s,int low,int high,int num);
int main()
{
	int num[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	cout<<"排序前：";
	array_Cout(num,15);
	sort(num,15);
	cout<<"排序后：";
	array_Cout(num,15);
	int search=0;
	cout<<"请输入查找数据"<<endl;
	cin>>search;
	int snum=binary_Search(num,0,15,search);
	if(snum==-1){
		cout<<"无此数"<<endl;
	}else{
		cout<<snum+1<<endl;
	}
	
	return 0;
}
void sort(int *s,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(s[i]<s[j]){
				s[i]=s[i]+s[j];
				s[j]=s[i]-s[j];
				s[i]=s[i]-s[j];
			}
		}
	}
}

void array_Cout(int *s,int n){
	for(int i=0;i<n-1;i++){
		cout<<s[i]<<" ";
	}
	cout<<s[n-1]<<endl;
}

int binary_Search(int *s,int low,int high,int num){
	int middle=(low+high)/2;
	if(low>high){
		return -1;
	}
	if(num==s[middle]){
		return middle;
	}else if(num<s[middle]){
		return binary_Search(s,low,middle-1,num);
	}else{
		return binary_Search(s,middle+1,high,num);
	}
}
