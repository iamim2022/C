#include<stdio.h>
//함수로 제곱하는 프로그램

//function
int pow(int a, int b){
	int result = 1;
	for(int i = 0; i<b; i++){	//i<b는 i는 이미 한 번 곱해져있기 때문. 
		result *= a;
	}
	return result;
}

//main
int main(){
	int returnResult;
	returnResult = pow(2,5);
	printf("%d",returnResult);	
	return 0;
} 
