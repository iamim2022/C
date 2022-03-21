#include <stdio.h>

int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int avg[21] = {0};
	int subjectSum[10] = {0};
	float subjectAvg[10]; 
	
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("학생 수 입력 : ");
	scanf("%d", &studentCount);
	printf("과목 수 입력 : ");
	scanf("%d", &subjectCount);
	for(int index = 0; index <studentCount; index++) 
	{ 
		printf("student %d 의 %d 개 과목 점수를 차례대로 입력하세요: ", index, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++)
		 {
			scanf("%d", &score[index][index2]);	
		}		
	}
	
	//학생별 과목의 총점, 평균 
	for(int index = 0; index <studentCount; index++) //행_학생 수 
	{
		int sum = 0;
		float avg = 0;	
		for(int index2 = 0; index2 < subjectCount; index2++) 
		{
			sum += score[index][index2];
			subjectSum[index2] += score[index][index2];	
		}
		avg = sum / (float)subjectCount;
		printf("studen %d 의 총점: %d, 평균: %5.2f\n", index, sum, avg);

	}
	
	//과목별 평균 
	for(int index = 0; index < subjectCount; index++) 
	{
		subjectAvg[index] = subjectSum[index] / (float)studentCount;
		printf("과목%d 평균 %5.2f\n", index, subjectAvg[index]);
	}

	return 0;
}
