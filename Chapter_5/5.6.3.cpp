//5.6.3: 求解x和y的最大公约数
#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int x, y;
    int fac;
    cout<<"Please enter two integers: ";
    cin>>x>>y;
    if(x == 0 || y == 0)
    {
        cout<<"x, y不能输入为0"<<endl;
        return 0;
    }
    fac=gcd(x, y);//调用gcd函数
    cout<<"The greatest common divisor of ";
    cout<<x<<" and "<<y<<" is: "<<fac<<endl;
    return 0;
}

int gcd(int a, int b)
{
    if(a < b)
        swap(a, b);
    if(a%b == 0)
        return b;
    return gcd(a, a%b);
}
