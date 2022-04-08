#include<stdio.h>
int main() {

	int arr[3]; // 배열 선언
	int* pa = arr; // 포인터에 배열명 저장
	int i; // 반복문 제어 횟수

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}


	return 0;
}