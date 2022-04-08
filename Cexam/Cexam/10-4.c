#include<stdio.h>

//output
// pa : ~
// pb : ~
//pb - pa : 2
//앞에 있는 배열 요소의 값 출력 : 20
//pa pb 참조 값 중에 앞에 있는거 출력임

int main(void) {
	int arr[] = { 10,20,30,40,50 };
	int* pa = arr;
	int* pb = pa + 3;
	pa++;
	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("%u\n", pb-pa);
	printf("%d", pa>pb?*pa:*pb);

	return 0;
}