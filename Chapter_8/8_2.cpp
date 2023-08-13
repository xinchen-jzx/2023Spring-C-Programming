#include<iostream>
using namespace std;

struct Complex sub(struct Complex, struct Complex);
struct Complex mul(struct Complex, struct Complex);
void output(struct Complex);

struct Complex{
	float a;
	float b;
};

Complex sub(struct Complex a, struct Complex b)
{
	struct Complex c;
	c.a = a.a + b.a;
	c.b = a.b + b.b;
	return c;
}

Complex mul(struct Complex a, struct Complex b)
{
	struct Complex c;
	c.a = a.a*b.a - a.b*b.b;
	c.b = a.b*b.a + a.a*b.b;
	return c;
}

void output(struct Complex c)
{
	if(c.a == 0 && c.b == 0)
		cout<<0;
	else if(c.a == 0)
		cout<<c.b<<"i"<<endl;
	else if(c.b == 0)
		cout<<c.a<<endl;
	else
	{
		if(c.b>0)
			cout<<c.a<<"+"<<c.b<<"i"<<endl;
		else
			cout<<c.a<<c.b<<"i"<<endl;
	}
}

int main()
{
	struct Complex c1, c2, c3, c4;
	cout<<"请输入复数c1实部与虚部:"<<endl;
	cin>>c1.a>>c1.b;
	cout<<"请输入复数c2实部与虚部:"<<endl;
	cin>>c2.a>>c2.b;

	c3 = sub(c1, c2);
	c4 = mul(c1, c2);

	cout<<"c1与c2的和是:";
	output(c3);
	cout<<"c1与c2的乘积是:";
	output(c4);

	return 0;
}
