#include <stdio.h>

int main()
{
	int id;	//�ֹι�ȣ �� 6�ڸ� 
	int birthYear, birthMonth, birthDay; //�������� 	birthYear�� ����⵵ ��2�ڸ� 
	int year;
	int man;	
	int age;	
	int gap;
	int gender;
	char genderPrint;
	
	//����� ���� ������ 
	int century;	
	int birthYearFull; //����⵵ 4�ڸ� 


	//�ʱ� ��� ����
	printf("%27s\n\n","<������ ����>");
	printf("=======================================\n\n");
	printf("\n�Է¿��� : 980315-2\n\n"); 
	printf("�ֹι�ȣ ���ڸ� �Է�: ");
	scanf("%d-%d", &id, &gender);
	
	//�ֹι�ȣ�� ��, ��, �Ϸ� ����
	birthYear = id / 10000;	
	birthMonth = (id % 10000) / 100;
	birthDay = id % 100;

	//���� ����_�ֹι�ȣ ���ڸ� ù�ڸ� Ȱ�� 
	if(gender == 1 && 3){
		genderPrint = 'M';
	} 
	if(gender == 2 && 4){
		genderPrint = 'W';
	}

	//������ ���� 1900���, 2000��� �����ϱ�
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

	//����⵵ - ����⵵	 
	gap = 2022 - birthYearFull;

	//�� ����
	if(birthMonth >= 3 && birthDay >= 15){
		man = gap;
	} 
	else{
		man = gap -1;
	}
	
	//���� ����, �츮�� �ƴ� ���� 
	age = gap + 1 ;	
	 
	//������� 
	printf("\n\n=======================================\n\n");	 
	printf("%30s\n\n","<2022�� 3�� 15�� ����>");
	printf("\n���̴� %d�� \n�� ���̴� %d�� �Դϴ�.", age, man );
	printf("\n������ %c �Դϴ�.\n", genderPrint);

	//�� ��� 
	switch(birthYearFull % 12)
	{
		case 0:
			printf("��� �����̶� �Դϴ�\n");
			break;
		case 1:
			printf("��� �߶� �Դϴ�.\n");
			break;			 
		case 2:
			printf("��� ���� �Դϴ�.\n");
			break;
		case 3:
			printf("��� ������ �Դϴ�.\n");
			break;
		case 4:
			printf("��� ��� �Դϴ�.\n");
			break;
		case 5:
			printf("��� �Ҷ� �Դϴ�.\n");
			break;			 
		case 6:
			printf("��� ȣ���̶� �Դϴ�.\n");
			break;
		case 7:
			printf("��� �䳢�� �Դϴ�.\n");
			break;
		case 8:
			printf("��� ��� �Դϴ�.\n");
			break;
		case 9:
			printf("��� ��� �Դϴ�.\n");
			break;
		case 10:
			printf("��� ���� �Դϴ�.\n");
			break;
		case 11:
			printf("��� ��� �Դϴ�.\n");
			break;
	} 

	printf("\n\n");	

	return 0;
}
