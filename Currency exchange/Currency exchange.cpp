#include <stdio.h>

int main()
{
	//�������� 
	int won, type, resultChange, returnMoney, returnMoneyNum; 
	int obaek, baek, sip;	//�Ž����� ���� ������ ���� 
	float originalChange, changeMoneyRate; 
	
	//�ʱ���� 
	printf("\n%30s\n\n","����ʽÿ�!"); 
	printf("%s\n","------------------------------------------------"); 
	printf("%30s\n\n","<������ ȯ��>"); 
	printf("%3s","USD : 1232.20	JPY : 1059.27 	EUR : 1355.11\n");	
	printf("%3s","CNY : 194.68	CAD : 964.92 \n");		
	printf("\n%s\n","------------------------------------------------");	
	
	printf("%30s\n\n","<ȯ���� �ݾ�>");
	printf("��ȯ���� ����θ� �����մϴ�.\n");	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ): ");
	scanf ("%d",&won);
	printf("\n%s\n","------------------------------------------------");
	
	printf("%32s","<������ȭ ���>\n"); 
	printf("1:USD, 2:JPY, 3:EUR, 4:CNY, 5:CAD \n\n");
	printf("ȯ���� ��ȭ�� ���ڸ� �Է��ϼ���. \n");
	printf("ȯ���� ��ȭ: ");
	scanf ("%d", &type); 
	printf("%s\n","------------------------------------------------");

	const float RATE_USD = 1232.20;
	const float RATE_JPY = 1059.27;
	const float RATE_EUR = 1355.11;
	const float RATE_CNY = 194.68;
	const float RATE_CAD = 964.92;
			 
	printf("%30s\n\n","<ȯ���� �ݾ�>");
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
		printf("�߸��� �Է��Դϴ�.");
		changeMoneyRate = 6; 
	}
	if(changeMoneyRate != 6)
	{
		
	//���� ��� 
		originalChange = won / changeMoneyRate;
		resultChange = originalChange;
		returnMoney = (originalChange - resultChange) * changeMoneyRate;
		
	//���� ������ �Ž����� ���� 
		obaek = returnMoney / 500;
		baek = (returnMoney- (500*obaek)) / 100;
		sip = (returnMoney - (obaek * 500) - (baek * 100)) / 10;
		
	//ȯ������ ��� 
		printf("ȯ�� : %d ��\n", resultChange);
		printf("�Ž����� : %d�� \n",(returnMoney / 10) * 10);
		printf("�ܵ� ���� : 500�� %d ��, 100�� %d��, 10�� %d��",obaek , baek, sip);
	}
	
	printf("\n%s\n","------------------------------------------------"); 
	printf("%38s\n\n","�̿����ּż� �����մϴ�."); 
	
	return 0; 
 } 
