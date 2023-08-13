#include<iostream>
using namespace std;
void reverse(int *p,int m,int n);
void array_Plus(int *p,int *q,int *o,int m,int n,int m2,int n2);


int main()
{	
	int a[2][3]={{6,5,4},{3,2,1}};	
	int b[2][3]={{6,5,4},{3,2,1}};
	int c[2][2];
	
	cout<<"原数组:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	reverse(*a,2,3);	
	cout<<"转置后:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
//	array_Plus(*b,*a,*c,2,3,3,2);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			c[i][j] = 0;
			for(int k = 0; k < 3; k++){
				c[i][j] += b[i][k]*a[k][j];
//				cout<<i<<" "<<j<<" "<<k<<endl;
//				cout<<b[i][k]<<" "<<a[k][j]<<" "<<c[i][j]<<endl;
			}
		}
	}
	cout<<"乘积后:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

void reverse(int *p,int m,int n){
	int c=0;	
	for(int i=0;i<m;i++){
		for(int j=i;j<n;j++){
			c = *(p + i*n + j);
			*(p + i*n + j) = *(p + j*n + i);
			*(p + j*n + i) = c;
		}
	}
}

