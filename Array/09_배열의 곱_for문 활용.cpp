#include<stdio.h>

int main()
{
	int A[10][10] = {
		{0, 0, 0},		
		{0, 3, 4, 5, 6, 7},
		{0, 5, 6, 7, 8, 9},
		{0, 3, 4, 5, 6, 7},
		{0, 5, 6, 7, 8, 9},	
		{0, 5, 6, 7, 8, 9},			
		};
	int B[10][10] = {
		{0, 0, 0},		
		{0, 3, 4, 5, 6, 7},
		{0, 5, 6, 7, 8, 9},
		{0, 3, 4, 5, 6, 7},
		{0, 5, 6, 7, 8, 9},	
		{0, 5, 6, 7, 8, 9},	
		};
	
	int AB[10][10] = {0,};
	
	//각 배열 A,B출력	
	for(int i = 1; i < 5; i++)
	{ 
		for(int j = 1; j < 5; j++) 
		{
			for(int k = 1; k<5; k++)
			{ 
			AB[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	//출력부 
	printf("AB = \n");
	for(int index = 1; index <=5; index++)
	{
		for(int index2 = 1; index2 <=5; index2++)
		{
			printf("%d", AB[index][index2]);
		}		
	printf("\n");
	}
	
	return 0;
}

