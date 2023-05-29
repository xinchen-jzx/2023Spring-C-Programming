//4.22-2
#include <iostream>
using namespace std;
int main()
{
	int a=100;
	do{
		if(a==((a/100)*(a/100)*(a/100)+(a%100/10)*(a%100/10)*(a%100/10)+(a%10)*(a%10)*(a%10))){
			cout<<a<<endl;
		}
		a++;
	}while(a<1000);
	return 0;
}
