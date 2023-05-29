//4.22-1
#include <iostream>
using namespace std;
int main()
{
	int a=100;
	while(a<1000){
		if(a==((a/100)*(a/100)*(a/100)+(a%100/10)*(a%100/10)*(a%100/10)+(a%10)*(a%10)*(a%10))){
			cout<<a<<endl;
		}
		a++;
	}
	return 0;
}
