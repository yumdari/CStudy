#include<stdio.h>
int main(void) {

	int arr[3];
	int i;

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;

	printf("�� ���� �迭 ��ҿ� Ű���� �Է� : ");
	scanf_s("%d", arr + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(arr + i));
	}

	return 0;
}