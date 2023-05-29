#include <iostream>
using namespace std;

int main()
{
	int i, j, n, sum = 0;
	cin>>n;
	for (i = 1; i <= n; i++)
	{
		if (i % 7 == 0)   // 如果是7的倍数，直接下一个，否则去while
			sum += i * i;
		else {
			j = i;
			while (j) { 
				int temp = j % 10;
        				if (temp == 7) {
					sum += i * i;
					break;
				}
				j = j / 10;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
