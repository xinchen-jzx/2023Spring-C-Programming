//4.16
#include <iostream>
using namespace std;
int main()
{
	int num1=0,num2=0,num3=0,num4=0;
	cin>>num1>>num2>>num3>>num4;
	if(num1<num2){
		num1=num1+num2;
		num2=num1-num2;
		num1=num1-num2;
	}
	if(num1<num3){
		num1=num1+num3;
		num3=num1-num3;
		num1=num1-num3;		
	}
	if(num1<num4){		
		num1=num1+num4;
		num4=num1-num4;
		num1=num1-num4;
	}
	if(num2<num3){
		num2=num2+num3;
		num3=num2-num3;
		num2=num2-num3;
	}
	if(num2<num4){
		num2=num2+num4;
		num4=num2-num4;
		num2=num2-num4;
	}
	if(num3<num4){
		num3=num3+num4;
		num4=num3-num4;
		num3=num3-num4;
	}
	cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
	return 0;
}

