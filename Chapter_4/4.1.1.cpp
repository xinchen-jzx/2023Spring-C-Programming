//4.10
#include <iostream>
using namespace std;
int main()
{
	double x=0,y=0;
	cin>>x>>y;
	if(x>y){
		cout<<x-y;
	}else if(x<y){
		cout<<y-x;
	}
	return 0;
}

