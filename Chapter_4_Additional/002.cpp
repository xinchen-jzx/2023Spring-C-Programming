#include <iostream>
using namespace std;

int main()
{ 
	int peo = 1;
	do{
		peo++;
		if(peo % 2 == 1 && peo % 3 == 1 && 
			peo % 4==1 && peo % 5 == 1 && 
			peo % 6 == 1 && peo % 7 == 0)
		{
			cout << peo << endl;
			break;
		}
	}while(true);
	return 0;
}
