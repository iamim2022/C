#include<stdio.h>
//ÇÔ¼ö·Î µ¡¼ÀÇÏ±â

//function
int plus(int a, int b){
	int result;
	result = a + b;
	return result;
} 

//main
int main(){
	int returnResult;
	returnResult = plus(29, 71);
	printf("%d", returnResult);
	return 0;
} 
