#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi; //정수형 포인터 pi 선언
	int size = 5; // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int count = 0; // 현재 입력된 양수 개수
	int num; // 양수를 입력할 변수

	pi = (int*)calloc(size, sizeof(int)); // 저장공간 20바이트(4바이트*5) 할당
	//pi = (int*)malloc(5*sizeof(int));
	while (1) {
		printf("양수만 입력하세요 => ");
		scanf_s("%d", &num); // 데이터 입력
		if (num <= 0) break; // 0또는 음수이면 종료
		if (count == size) { // 저장 공간을 모두 사용하면
			size += 5; // 크기를 늘려서 재할당
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (int idx = 0; idx < count; idx++) {
		printf("%5d", pi[idx]);
	}
	free(pi); // 동적 할당 저장 공간 반납

	return 0;
}