#include<stdio.h>

int main(void) {
	int score[3][4];
	int total;
	double avg;

	for (int idx = 0; idx < 3; idx++) {
		printf("4������ ���� �Է� : ");
		for (int jdx = 0; jdx < 4; jdx++) {
			scanf_s("%d", &score[idx][jdx]);
		}
	}

	for (int idx = 0; idx < 3; idx++) {
		total = 0;
		for (int jdx = 0; jdx < 4; jdx++) {
			total += score[idx][jdx];
		}
		avg = total / 4.0;
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}
	return 0;
}