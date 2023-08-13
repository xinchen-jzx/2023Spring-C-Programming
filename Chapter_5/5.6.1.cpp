//5.6.1: 十进制转二进制
#include<iostream>
using namespace std;

void ten2two(int n);

int main(){
	int num=0;
	cout<<"请输入十进制整数"<<endl;
	cin>>num;
	ten2two(num);
	return 0;
}

void ten2two(int n){
	if(n==1 || n==0){
		cout<<n;
	}else{
		int a=n%2;
		ten2two(n/2);
		cout<<a;
	}
}
