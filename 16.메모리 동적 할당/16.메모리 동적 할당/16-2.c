#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) { //exception handler
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (int idx = 0; idx < 5; idx++) { // input 5 values in &pi[idx]
		scanf_s("%d", &pi[idx]);
		sum += pi[idx];
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}