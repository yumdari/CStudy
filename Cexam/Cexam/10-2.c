#include<stdio.h>
int main() {

	int arr[3]; // �迭 ����
	int* pa = arr; // �����Ϳ� �迭�� ����
	int i; // �ݺ��� ���� Ƚ��

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}


	return 0;
}