#include <iostream>
using namespace std;
int main()
{
	char node0;
	cout<<"ÇëÊäÈëÐ¡Ð´×ÖÄ¸£º";
	cin>>node0;
	if ('a'<=node0&&node0<='z'){
		cout<<"´óÐ´×ÖÄ¸Îª£º"<<char(node0-(97-65))<<endl;
	}else{
		cout<<"error"<<endl;
	}
	return 0;
}
