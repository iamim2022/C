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
	
	//상단모양 세팅 
	printf("년도 입력: ");
	scanf("%d", &year);
	printf("월 입력: ");
	scanf("%d", &month);

	//오류 메시지 출력 	
	if(month>=13 || month <= 0) {
	printf("\n잘못된 달을 입력했습니다.");
	break;
	}
		
	printf("\n==========================================\n");
	printf("%37s\n","오늘도 좋은하루 보내세요~(^∇^~)"); 		
	printf("\n============== %d 년 %d 월 ==============",year, month); 
	printf("\n%4s %5s %5s %5s %5s %5s %5s\n","일","월","화","수","목","금","토") ;
	printf("------------------------------------------\n");		
	
	//1900년 부터 입력받은 year까지 몇 년 지났나 확인
	days = (year - 1900) * 365;
	
	//윤년
	for(int index = 1901; index < year; index++)
	{
		if( ((index % 4) == 0 && (index % 100) != 0) || ((index % 400) == 0))	
		{
			days++; //윤년 있는해에는 366일. 
		}
	} 
	
	if( ((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0))	
	{
		END_2 = 29 ; //윤년 있는해에는 366일. 
	}
	
	// month 
	switch(month){
		case 12:	//case는 책갈피 같은 것. 비교를 계속하는게 아니라 값을 따라 쭉 내려옴. 
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
	}	//몇 월인지에 따라까지 day가 다 더해짐. 
	
	
	//day
	dayName = days % 7;
	dayName++; // 0~6(월~일) => 1~7(월~일)
	if(dayName == 7) 	//  0~6(일~토)
	{
		dayName = 0;
	 }
	 
	 //앞에 공백 출력
	 for(int index = 0; index < dayName; index++){
	 	printf("%5s ","");
	 } 
	 
	//monthLastDay
	 	switch(monthLastDay){
		case 12:	//case는 책갈피 같은 것. 비교를 계속하는게 아니라 값을 따라 쭉 내려옴. 
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
	printf("%37s\n","v( ^-^ )/달력 출력 성공!v( ^o^ )/");
	return 0;
 } 
}
