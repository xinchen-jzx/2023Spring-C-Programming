#include <bits/stdc++.h>
using namespace std;
char* ReplaceString(char *str,char *s1,char *s2);
int main()
{
    char a[20]="11cd2cdd33",b[3]="cd", c[4]="xxc", d[5]="main";
    cout<<ReplaceString(a,b,c)<<endl;
    cout<<ReplaceString(a,d,c)<<endl;
    return 0;
}
char* ReplaceString(char *str,char *s1,char *s2){
    char p[20];
//	char *final=new char[20];
//	strcpy(final,str);
    char *temp=strstr(str,s1);
    while(temp!=NULL){
        strcpy(p,temp+strlen(s1));
        *temp='\0';
        strcat(str,s2);
        strcat(str,p);
        temp=strstr(temp,s1);
    }
//	return final;
    return str;
}
