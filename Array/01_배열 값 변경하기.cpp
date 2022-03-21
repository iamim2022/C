#include <stdio.h>

int main()
{
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
	
	numArr[0] = 123;	//change index 0 value from 11 to 123
	 
	printf("%d\n", numArr[0]);		
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);

	return 0;
 } 
