#include <iostream>
using namespace std;

int main()
{
	int i, j;

	for(i = 100; i <= 200; i++)
	{
		j = 2;
		while(j < = sqrt(i))
		{
	       		if(i%j == 0) break;  
                  		j++; 
		}
        		if(j > sqrt(i))
		{
	      		cout << i << ' '; 
		}
	}
	
	cout << endl;
	return 0;
}
