#include <stdio.h>

int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	int arrSum  = 0;	
	
	for (int i = 0; i <= 9; i++)
	{
		numArr[i] *= 2;				//double the value of each element in the numArr
		printf("%d\n", numArr[i]);	//Print double values
	}

	for (int i = 0; i <= 9; i++)
	{
		arrSum += numArr[i];	//sum of arrays	
	}
	printf("sum : %d", arrSum);

	return 0;
 } 
 
