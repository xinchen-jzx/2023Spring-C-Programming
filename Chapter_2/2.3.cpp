#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	double r;
	cout<<"请输入半径：";
	cin>>r;
	double L=(2*PI)*r;
	double S=(PI*r)*r;
	cout<<"周长为："<<L<<endl;
	cout<<"面积为："<<S<<endl;
	return 0;
}
