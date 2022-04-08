#include<stdio.h>

void print(int* pa, int size) {
	for (int idx = 0; idx < size; idx++) { // 배열 길이만큼 index가 1씩 증가
		printf("%4d", pa[idx]); 
	}
}

int main() {

	int ary1[] = { 10, 20, 30, 40, 50 };
	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };

	int aryLength1 = (sizeof(ary1) / sizeof(ary1[0])); // 배열 전체 크기/배열 1개 크기 : 5
	int aryLength2 = (sizeof(ary2) / sizeof(ary2[0])); // 배열 전체 크기/배열 1개 크기 : 7

	print(ary1, aryLength1);
	printf("\n");
	print(ary2, aryLength2);

	return 0;
}