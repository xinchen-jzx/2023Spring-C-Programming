//5.3.3
#include<iostream>
using namespace std;

bool primeNumber(int number);

int main(){
	int number=0;
	cout<<"请输入数据"<<endl;
	cin>>number;
	while(number<8 || number%2!=0){
		cout<<"请重新输入"<<endl;
		cin>>number;
	}
	for(int i=6;i<=number;i++){
		for(int j=2;j<i;j++){
			if(primeNumber(j) && primeNumber(i-j)){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;
			}
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
