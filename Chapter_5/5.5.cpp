#include<iostream>
using namespace std;

int zuHeShu(int m,int r);
int jieCheng(int n);

int main(){
	int m,r;
	cout<<"请输入正整数m,r, 要求m>r"<<endl;
	cin>>m>>r;
	while(m<=r || r<=0){
		cout<<"请重新输入"<<endl;
		cin>>m>>r;
	}
	cout<<"组合数为："<<zuHeShu(m,r);
	return 0;
}
int zuHeShu(int m,int r){
	return jieCheng(m)/(jieCheng(r)*jieCheng(m-r));
}
	
int jieCheng(int n){
	int sum=1;
	for(int i=2;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}
