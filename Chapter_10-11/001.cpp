#include <iostream>
using namespace std;
class rectangle {
private:
	double lenth;
	double width;
public:
	rectangle() {
		lenth=0;
		width=0;
	}
	~rectangle() {}
	void input() {
		cout<<"��������εĳ�l�Ϳ�w��Ϊ������"<<endl;
		cin>>lenth>>width;
	}
	void s_area(){
		cout<<"���Ϊ"<<lenth*width<<endl;
	}
};
int main(){
	rectangle a;
	a.input();
	a.s_area();
	return 0;
}
