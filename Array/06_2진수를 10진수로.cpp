#include<stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1, 1, 0, 1};
	
	for (int index = 3; index >= 0; index -- )	//������� 
	{
		int result = 1;
		for (int index2 = 0; index2 < index; index2++) //�������� 
		{
			result *= 2 ;
		 } 
		 decimal += binary[3-index]*result;
		}	
	printf("������ [1101]�� �������� %d �̴�.", decimal);
	return 0;
}
