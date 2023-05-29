//4.11
#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	cin>>a;
	int flag=0;
	if(a/10000!=0){
		flag=1;
		cout<<5<<endl;
		cout<<a/10000<<endl;
		b=a/10000;
		a=a%10000;
	}
	if(a/1000!=0){
		if(flag==0){
			cout<<4<<endl;
			b=a/1000;
			flag=2;
		}else{
			b=b+a/1000*10;
		}
		cout<<a/1000<<endl;
		a=a%1000;
	}
	if(a/100!=0){
		switch (flag) {
			case 0:
				cout<<3<<endl;
				b=a/100;
				flag=3;
				break;
			case 1:
				b=b+a/100*100;
				break;
			case 2:
				b=b+a/100*10;
				break;
			default:
				break;
		}
		cout<<a/100<<endl;
		a=a%100;
	}
	if(a/10!=0){
		switch (flag) {
			case 0:
				cout<<2<<endl;
				b=a/10;
				flag=4;
				break;
			case 1:
				b=b+a/10*1000;
				break;
			case 2:
				b=b+a/10*100;
				break;
			case 3:
				b=b+a/10*10;
				break;
			default:
				//TODO
				break;
		}
		cout<<a/10<<endl;
		a=a%10;
	}
	switch (flag) {
		case 0:
			cout<<1<<endl;
			b=a;
			break;
		case 1:
			b=b+a*10000;
			break;
		case 2:
			b=b+a*1000;
			break;
		case 3:
			b=b+a*100;
			break;
		case 4:
			b=b+a*10;
		default:
			break;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}

