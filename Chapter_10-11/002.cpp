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
		cout<<"��������ӷ�ĸ��Ϊ���Σ���ĸ��Ϊ0"<<endl;
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
			cout<<"����Ϊ��-"<<abs(son)<<"/"<<abs(mom)<<endl;
		}else{
			cout<<"����Ϊ��"<<son<<"/"<<mom<<endl;
		}		
	}
	void outXs(){
		cout<<"С��Ϊ��"<<son*1.0/mom<<endl;
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
	cout<<"������"<<endl;
	z=x.add(y);
	z.outFs();
	z.outXs();
	cout<<"������"<<endl;
	z=x.sub(y);
	z.outFs();
	z.outXs();
	return 0;
}
