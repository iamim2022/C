#include<stdio.h>
//�Լ��� �����ϴ� ���α׷�

//function
int pow(int a, int b){
	int result = 1;
	for(int i = 0; i<b; i++){	//i<b�� i�� �̹� �� �� �������ֱ� ����. 
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
