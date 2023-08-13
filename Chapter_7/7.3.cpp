#include <iostream>
#include <string.h>
using namespace std;
void swapname(char **name,int n);
void printstl(char **name);
bool cmp_str(char *a,char *b);
int main()
{
	char songName[5][30];
	printf("请输入五首英文歌名:\n");
	for(int i=0;i<5;i++){
		cin>>songName[i];
	}
	char *name[5]={&songName[0][0],&songName[1][0],&songName[2][0],&songName[3][0],&songName[4][0]};
	swapname(name,1);
	printstl(name);
	swapname(name,2);
	printstl(name);
	swapname(name,3);
	printstl(name);
	return 0;
}
void swapname(char **name,int n){
	switch (n) {
		case 1://原始顺序
			cout<<"原始顺序："<<endl;
			break;
		case 2://首字母序
			cout<<"首字母序："<<endl;
			for(int i=0;i<5;i++){
				for(int j=i;j<5;j++){
//					cout<<name[i]<<" "<<name[j]<<endl;
//					if(name[i][0]>name[j][0]){
					if(cmp_str(name[i],name[j])){
						char *s=name[j];
						name[j]=name[i];
						name[i]=s;
					}
				}
			}
			break;
		case 3://首字母逆
			cout<<"首字母逆："<<endl;
			for(int i=0;i<5;i++){
				for(int j=i;j<5;j++){
//					cout<<name[i]<<" "<<name[j]<<endl;
//					if(name[i][0]<name[j][0]){
					if(cmp_str(name[j],name[i])){
						char *s=name[j];
						name[j]=name[i];
						name[i]=s;
					}
				}
			}
			 break;
		default:
			//TODO
			break;
	}
}
void printstl(char **name){
	for(int i=0;i<5;i++){
		cout<<name[i]<<endl;
	}
}
bool cmp_str(char *a,char *b){
	int num1=strlen(a),num2=strlen(b);
	if(num1>num2){
		for(int i=0;i<num2;i++){
			if(a[i]>b[i]){
				return true;
			}else if(a[i]<b[i]){
				return false;
			}
		}
		return true;
	}else if(num1<num2){
		for(int i=0;i<num1;i++){
			if(a[i]>b[i]){
				return true;
			}else if(a[i]<b[i]){
				return false;
			}
		}
		return false;
	}else{
		for(int i=0;i<num1;i++){
			if(a[i]>b[i]){
				return true;
			}else if(a[i]<b[i]){
				return false;
			}
		}
		return true;//完全相同
	}
}
