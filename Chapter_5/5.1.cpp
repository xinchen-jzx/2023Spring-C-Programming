#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double dis=50,high1=25,high2=38,len=0;
	len=sqrt(pow(high1-high2,2)+pow(dis,2));
	cout<<"直线距离为："<<len<<endl;
	return 0;
}
