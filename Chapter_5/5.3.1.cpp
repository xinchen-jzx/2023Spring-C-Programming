//5.3-1.2
#include<iostream>
using namespace std;

bool primeNumber(int number);

int main(){
	int number=0,n=0;
	bool flag=true;
	while(flag){
		cout<<"请输入一个大于6的偶数"<<endl;
		cin>>number;
		while(number%2!=0||number<6){
			cout<<"请重新输入"<<endl;
			cin>>number;
		}
		for(int i=2;i<number;i++){
			if(primeNumber(i) && primeNumber(number-i)){
				cout<<number<<"="<<i<<"+"<<number-i<<endl;
				break;
			}
		}
		cout<<"是否0继续验证"<<endl;
		cin>>n;
		if(n!=0){
			flag=true;
		}else{
			flag=false;
		}
	}
	return 0;
}

bool primeNumber(int number){
	for(int i=2;i<number;i++){
		if(number%i==0){
			return false;
		}
	}
	return true;	
}
