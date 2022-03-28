#include <stdio.h>

int main()
{
	int id;	//주민번호 앞 6자리 
	int birthYear, birthMonth, birthDay; //출생년월일 	birthYear는 출생년도 끝2자리 
	int year;
	int man;	
	int age;	
	int gap;
	int gender;
	char genderPrint;
	
	//계산을 위한 변수들 
	int century;	
	int birthYearFull; //출생년도 4자리 


	//초기 출력 세팅
	printf("%27s\n\n","<만나이 계산기>");
	printf("=======================================\n\n");
	printf("\n입력예시 : 980315-2\n\n"); 
	printf("주민번호 앞자리 입력: ");
	scanf("%d-%d", &id, &gender);
	
	//주민번호를 년, 월, 일로 끊기
	birthYear = id / 10000;	
	birthMonth = (id % 10000) / 100;
	birthDay = id % 100;

	//성별 구분_주민번호 뒷자리 첫자리 활용 
	if(gender == 1 && 3){
		genderPrint = 'M';
	} 
	if(gender == 2 && 4){
		genderPrint = 'W';
	}

	//성별로 나이 1900년대, 2000년대 유추하기
	switch(gender){
		case 1: case 2:
			century = 1900;
			birthYearFull = 1900+birthYear;
			break;
		
		case 3: case 4:
			century = 2000;
			birthYearFull = 2000+birthYear;
			break;	
	}

	//현재년도 - 출생년도	 
	gap = 2022 - birthYearFull;

	//만 나이
	if(birthMonth >= 3 && birthDay >= 15){
		man = gap;
	} 
	else{
		man = gap -1;
	}
	
	//세는 나이, 우리가 아는 나이 
	age = gap + 1 ;	
	 
	//나이출력 
	printf("\n\n=======================================\n\n");	 
	printf("%30s\n\n","<2022년 3월 15일 기준>");
	printf("\n나이는 %d세 \n만 나이는 %d세 입니다.", age, man );
	printf("\n성별은 %c 입니다.\n", genderPrint);

	//띠 계산 
	switch(birthYearFull % 12)
	{
		case 0:
			printf("띠는 원숭이띠 입니다\n");
			break;
		case 1:
			printf("띠는 닭띠 입니다.\n");
			break;			 
		case 2:
			printf("띠는 개띠 입니다.\n");
			break;
		case 3:
			printf("띠는 돼지띠 입니다.\n");
			break;
		case 4:
			printf("띠는 쥐띠 입니다.\n");
			break;
		case 5:
			printf("띠는 소띠 입니다.\n");
			break;			 
		case 6:
			printf("띠는 호랑이띠 입니다.\n");
			break;
		case 7:
			printf("띠는 토끼띠 입니다.\n");
			break;
		case 8:
			printf("띠는 용띠 입니다.\n");
			break;
		case 9:
			printf("띠는 뱀띠 입니다.\n");
			break;
		case 10:
			printf("띠는 말띠 입니다.\n");
			break;
		case 11:
			printf("띠는 양띠 입니다.\n");
			break;
	} 

	printf("\n\n");	

	return 0;
}
