//5.17: 递归方式实现
#include<iostream>
using namespace std;

void coutHermite(int n,int x);
int hermite(int n,int x);

int main(){
	int n,x;
	cout<<"请输入n和x的值"<<endl;
	cin>>n>>x;
	coutHermite(n,x);
	return 0;
}

void coutHermite(int n,int x){
	if(n==0){
		cout<<"H0("<<x<<")=1"<<endl;
	}else if(n==1){
		cout<<"H1("<<x<<")="<<2*x<<endl;
	}else{
		coutHermite(n-1,x);
		cout<<"H"<<n<<"("<<x<<")="<<hermite(n,x)<<endl;
	}
}

int hermite(int n,int x){
	if(n==0){
		return 1;
	}else if(n==1){
		return 2*x;
	}else{
		int a,b;
		a=2*x*hermite(n-1,x);
		b=2*(n-1)*hermite(n-2,x);
		return a-b;
	}
	
}
