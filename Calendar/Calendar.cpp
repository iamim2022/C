#include <stdio.h>

int main()
{
	const int END_1 = 31, END_3 = 31, END_4 = 30, END_5 = 31, END_6 = 30, END_7 = 31, END_8 = 31;
	const int END_9 = 30, END_10 = 31, END_11 = 30, END_12 = 31;
	int END_2 = 28;
	int year, month, monthLastDay;
	int days, dayName;
	
for(;;){
	END_2 = 28;
	
	//��ܸ�� ���� 
	printf("�⵵ �Է�: ");
	scanf("%d", &year);
	printf("�� �Է�: ");
	scanf("%d", &month);

	//���� �޽��� ��� 	
	if(month>=13 || month <= 0) {
	printf("\n�߸��� ���� �Է��߽��ϴ�.");
	break;
	}
		
	printf("\n==========================================\n");
	printf("%37s\n","���õ� �����Ϸ� ��������~(^��^~)"); 		
	printf("\n============== %d �� %d �� ==============",year, month); 
	printf("\n%4s %5s %5s %5s %5s %5s %5s\n","��","��","ȭ","��","��","��","��") ;
	printf("------------------------------------------\n");		
	
	//1900�� ���� �Է¹��� year���� �� �� ������ Ȯ��
	days = (year - 1900) * 365;
	
	//����
	for(int index = 1901; index < year; index++)
	{
		if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0))	
		{
			days++; //���� �ִ��ؿ��� 366��. 
		}
	} 
	
	if( ((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0))	
	{
		END_2 = 29 ; //���� �ִ��ؿ��� 366��. 
	}
	
	// month 
	switch(month){
		case 12:	//case�� å���� ���� ��. �񱳸� ����ϴ°� �ƴ϶� ���� ���� �� ������. 
			days += END_11;
		case 11:
			days += END_10;
		case 10:
			days += END_9;
		case 9:
			days += END_8;
		case 8:
			days += END_7;						
		case 7:
			days += END_6;
		case 6:
			days += END_5;			
		case 5:
			days += END_4;
		case 4:
			days += END_3;			
		case 3:
			days += END_2;
		case 2:
			days += END_1;				
	}	//�� �������� ������� day�� �� ������. 
	
	
	//day
	dayName = days % 7;
	dayName++; // 0~6(��~��) => 1~7(��~��)
	if(dayName == 7) 	//  0~6(��~��)
	{
		dayName = 0;
	 }
	 
	 //�տ� ���� ���
	 for(int index = 0; index < dayName; index++){
	 	printf("%5s ","");
	 } 
	 
	//monthLastDay
	 	switch(monthLastDay){
		case 12:	//case�� å���� ���� ��. �񱳸� ����ϴ°� �ƴ϶� ���� ���� �� ������. 
			monthLastDay += END_11;
			break;
		case 11:
			monthLastDay += END_10;
			break;
		case 10:
			monthLastDay += END_9;
			break;
		case 9:
			monthLastDay += END_8;
			break;
		case 8:
			monthLastDay += END_7;
			break;						
		case 7:
			monthLastDay += END_6;
			break;
		case 6:
			monthLastDay += END_5;	
			break;		
		case 5:
			monthLastDay += END_4;
			break;
		case 4:
			monthLastDay += END_3;
			break;			
		case 3:
			monthLastDay += END_2;
			break;
		case 2:
			monthLastDay += END_1; 
			break;
		case 1:
			monthLastDay += END_1; 
			break;	 
		}

	for(int index = 1, enter = dayName + 1; index <= 31; index++, enter++){
		printf("%5d ", index);
		if(enter % 7 == 0){
			printf("\n");
		}
	}
	printf("\n");
	
	printf("\n==========================================\n");
	printf("%37s\n","v( ^-^ )/�޷� ��� ����!v( ^o^ )/");
	return 0;
 } 
}
