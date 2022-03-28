#include <stdio.h>

int main()
{
	//변수모음 
	int won, type, resultChange, returnMoney, returnMoneyNum; 
	int obaek, baek, sip;	//거스름돈 동전 단위별 개수 
	float originalChange, changeMoneyRate; 
	
	//초기출력 
	printf("\n%30s\n\n","어서오십시오!"); 
	printf("%s\n","------------------------------------------------"); 
	printf("%30s\n\n","<오늘의 환율>"); 
	printf("%3s","USD : 1232.20	JPY : 1059.27 	EUR : 1355.11\n");	
	printf("%3s","CNY : 194.68	CAD : 964.92 \n");		
	printf("\n%s\n","------------------------------------------------");	
	
	printf("%30s\n\n","<환전할 금액>");
	printf("※환전은 지폐로만 가능합니다.\n");	
	printf("환전을 원하는 금액을 입력하세요(원화): ");
	scanf ("%d",&won);
	printf("\n%s\n","------------------------------------------------");
	
	printf("%32s","<보유외화 목록>\n"); 
	printf("1:USD, 2:JPY, 3:EUR, 4:CNY, 5:CAD \n\n");
	printf("환전할 외화의 숫자를 입력하세요. \n");
	printf("환전할 외화: ");
	scanf ("%d", &type); 
	printf("%s\n","------------------------------------------------");

	const float RATE_USD = 1232.20;
	const float RATE_JPY = 1059.27;
	const float RATE_EUR = 1355.11;
	const float RATE_CNY = 194.68;
	const float RATE_CAD = 964.92;
			 
	printf("%30s\n\n","<환전된 금액>");
	if(type ==1){
	changeMoneyRate = RATE_USD;		
 	}
	else if(type ==2){
	changeMoneyRate = RATE_JPY;			
	}	
	else if(type ==3){
	changeMoneyRate = RATE_EUR;			
	}	
	else if(type ==4){
	changeMoneyRate = RATE_CNY;	
	}	
	else if(type ==5){
	changeMoneyRate = RATE_CAD;	
	}	
	else
	{
		printf("잘못된 입력입니다.");
		changeMoneyRate = 6; 
	}
	if(changeMoneyRate != 6)
	{
		
	//변수 계산 
		originalChange = won / changeMoneyRate;
		resultChange = originalChange;
		returnMoney = (originalChange - resultChange) * changeMoneyRate;
		
	//동전 권종별 거스름돈 개수 
		obaek = returnMoney / 500;
		baek = (returnMoney- (500*obaek)) / 100;
		sip = (returnMoney - (obaek * 500) - (baek * 100)) / 10;
		
	//환전내역 출력 
		printf("환전 : %d 장\n", resultChange);
		printf("거스름돈 : %d원 \n",(returnMoney / 10) * 10);
		printf("잔돈 갯수 : 500원 %d 개, 100원 %d개, 10원 %d개",obaek , baek, sip);
	}
	
	printf("\n%s\n","------------------------------------------------"); 
	printf("%38s\n\n","이용해주셔서 감사합니다."); 
	
	return 0; 
 } 
