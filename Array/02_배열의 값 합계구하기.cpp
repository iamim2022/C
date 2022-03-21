#include <stdio.h>

int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	//array of size 10
	int arrSum  = 0;	
	//arrSum Initialization 
	
	for (int i = 0; i <= 9; i++)	//index 0 1 2 3 4 5 6 7 8 9 
	{
		arrSum += numArr[i];
	}

	printf("sum : %d", arrSum);

	return 0;
 } 
 
