#include<iostream>
using namespace std;
int str_Len(char *s,int n);
int main()
{
	char string_0[30];
	cin>>string_0;
	int num_B=0,num_S=0,num_N=0;
	int i=0;
	int len=str_Len(string_0,30);
	do{
		if('0'<=string_0[i] && string_0[i]<='9'){
			num_N++;
		}
		if('a'<=string_0[i] && string_0[i]<='z'){
			num_S++;
		}
		if('A'<=string_0[i] && string_0[i]<='Z'){
			num_B++;
		}
		i++;
	}while(i<len);
	cout<<"长度："<<len<<endl;
	cout<<"大写："<<num_B<<endl;
	cout<<"小写："<<num_S<<endl;
	cout<<"数字："<<num_N<<endl;
	return 0;	
}

int str_Len(char *s,int n){
	int num=0;
	do{
		num++;
	}while(s[num]!='\0'&&num<n);
	return num;
}
