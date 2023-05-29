//4.21
#include<iostream>
using namespace std;
int main()
{
	double sn=0;
	int a=2,b=1;
	for(int i=0;i<20;i++){
		cout<<a<<'/'<<b<<' ';
		sn=sn+a*1.0/b;
		int c=a;
		a=a+b;
		b=c;
	}
	cout<<'\n';
	cout<<sn*1.0<<endl;
	return 0;
}

