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
		cout<<"请输入矩形的长l和宽w，为浮点型"<<endl;
		cin>>lenth>>width;
	}
	void s_area(){
		cout<<"面积为"<<lenth*width<<endl;
	}
};
int main(){
	rectangle a;
	a.input();
	a.s_area();
	return 0;
}
