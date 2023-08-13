//5.17: 非递归方式实现
#include<iostream>
using namespace std;

int hermite(int n,int x);

int main(){
	int n,x;
	cout<<"请输入n和x的值"<<endl;
	cin>>n>>x;
	for(int i=0;i<=n;i++){
		cout<<"H"<<i<<"("<<x<<")="<<hermite(i,x)<<endl;
	}
	return 0;
}

int hermite(int n,int x){	
	if(n==0){
		return 1;
	}else if(n==1){
		return 2*x;
	}else{
		int H_n_1=2*x,H_n_2=1;
		for(int i=2;i<=n;i++){
			int tr=H_n_1;
			H_n_1=2*x*H_n_1-2*(i-1)*H_n_2;
			H_n_2=tr;
		}
		return H_n_1;
	}
	
}
