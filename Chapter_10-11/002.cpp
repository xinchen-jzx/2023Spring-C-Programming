#include<iostream>
using namespace std;
class Rational {
private:
	int son;
	int mom;
	void easier(){
		int s=son,m=mom,t=0;
		while(m%s!=0){
			t=m;
			m=s;
			s=t%s;
		}
		son=son/s;
		mom=mom/s;
	}
public:
	Rational(){
		son=1;
		mom=1;
	}
	Rational(int a,int b) {
		son=a;
		mom=b;
	}
	void input() {
		cout<<"请输入分子分母，为整形，分母不为0"<<endl;
		cin>>son>>mom;
	}
	int getFz(){
		return son;
	}
	int getFm(){
		return mom;
	}
	void outFs(){
		easier();
		if(son*mom<0){
			cout<<"分数为：-"<<abs(son)<<"/"<<abs(mom)<<endl;
		}else{
			cout<<"分数为："<<son<<"/"<<mom<<endl;
		}		
	}
	void outXs(){
		cout<<"小数为："<<son*1.0/mom<<endl;
	}
	Rational add(Rational r){
		Rational s(son*r.getFm()+r.getFz()*mom,mom*r.getFm());
		return s;
	}
	Rational sub(Rational r){
		Rational s(son*r.getFm()-r.getFz()*mom,mom*r.getFm());
		return s;
	}
};

int main(){
	Rational x,y,z;
	x.input();
	y.input();
	x.outFs();
	x.outXs();
	cout<<"分数和"<<endl;
	z=x.add(y);
	z.outFs();
	z.outXs();
	cout<<"分数差"<<endl;
	z=x.sub(y);
	z.outFs();
	z.outXs();
	return 0;
}
