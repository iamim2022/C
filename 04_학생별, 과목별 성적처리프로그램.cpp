#include <stdio.h>

int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int avg[21] = {0};
	int subjectSum[10] = {0};
	float subjectAvg[10]; 
	
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("�л� �� �Է� : ");
	scanf("%d", &studentCount);
	printf("���� �� �Է� : ");
	scanf("%d", &subjectCount);
	for(int index = 0; index <studentCount; index++) 
	{ 
		printf("student %d �� %d �� ���� ������ ���ʴ�� �Է��ϼ���: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++)
		 {
			scanf("%d", &score[index][index2]);	
		}		
	}
	
	//�л��� ������ ����, ��� 
	for(int index = 0; index <studentCount; index++) //��_�л� �� 
	{
		int sum = 0;
		float avg = 0;	
		for(int index2 = 0; index2 < subjectCount; index2++) 
		{
			sum += score[index][index2];
			subjectSum[index2] += score[index][index2];	
		}
		avg = sum / (float)subjectCount;
		printf("studen %d �� ����: %d, ���: %5.2f\n", index, sum, avg);

	}
	
	//���� ��� 
	for(int index = 0; index < subjectCount; index++) 
	{
		subjectAvg[index] = subjectSum[index] / (float)studentCount;
		printf("����%d ��� %5.2f\n", index, subjectAvg[index]);
	}

	return 0;
}
