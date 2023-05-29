//4.27-2
#include<iostream>
using namespace std;
int main()
{
	int n=10;
	for(int i=0;i<n;i++){
		for(int j=n;j>i;j--){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
