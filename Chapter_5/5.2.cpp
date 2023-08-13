#include<iostream>
#include<math.h>
using namespace std;

double edgeCount(double rightEdge1,double rightEdge2);

int main(){	
	double dis=50,high1=25,high2=38;
	cout<<"直线距离为："<<edgeCount(high1-high2,dis)<<endl;	
	return 0;
}

double edgeCount(double rightEdge1,double rightEdge2){
	return sqrt(pow(rightEdge1,2)+pow(rightEdge2,2));
}
