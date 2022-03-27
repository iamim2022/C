#include<stdio.h>
//함수로 곱셈하는 프로그램

//function
int mul(int a, int b){
	int result;
	result = a * b;
	return result;
} 

//main 
int main(){
	int returnResult;
	returnResult = mul(2,5);
	printf("%d", returnResult);
	return 0;
} 
