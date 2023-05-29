#include<iostream>
#include<cmath>

using namespace std;
 
int main()
{
    int n, i, j, sum = 0;
    cin >>n;

    for(i = 2; ; i++)
    {
		for(j = 2; j <= sqrt(i) && i % j!=0; j++);
		if(j > sqrt(i))
		{
		sum++;
			if(sum == n)
			{
				cout << i<<endl;
				break;
			}
		}
	}
	return 0;
}
