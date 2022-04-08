#include<stdio.h>
int prime_check(int n) {
	int cnt = 0; // 배열의 길이
	int idx, jdx, kdx; // 반복문 인자
	int arr[100] = { 0 }; // 길이가 100인 정수형 배열 선언 및 초기화
	int space = 0; // 개행을 위한 변수

	for (idx = 2; idx < n; idx++)
	{
		for (jdx = 2; jdx < idx; jdx++) // 2부터 n-1과 비교
		{
			if (idx % jdx == 0) { // 소수가 아니라고 판별되면 반복문 탈출
				break;
			}
		}
		if (idx == jdx) { 
			arr[cnt] = idx;
			cnt++; // 배열의 길이를 알아냄
		}
	}
	for (kdx = 0; kdx < cnt; kdx++) {
		printf("%4d", arr[kdx]);
		space++;
		if (space == 5) { // 5개 출력마다 개행
			printf("\n");
			space = 0; // 개행 후 space 변수를 0으로 초기화
		}
	}
}

int main(void) {
	int num;

	scanf_s("%d", &num); // 정수 입력

	prime_check(num);

	return 0;
}