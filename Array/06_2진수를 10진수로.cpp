#include<stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1, 1, 0, 1};
	
	for (int index = 3; index >= 0; index -- )	//역순출력 
	{
		int result = 1;
		for (int index2 = 0; index2 < index; index2++) //제곱지수 
		{
			result *= 2 ;
		 } 
		 decimal += binary[3-index]*result;
		}	
	printf("이진수 [1101]의 십진수는 %d 이다.", decimal);
	return 0;
}
