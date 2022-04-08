#include<stdio.h>

int find_max(int* pa, int size);

int main(void) {
	int arr[] = { 1,3,5,2,4 };
	int length = sizeof(arr)/sizeof(int);
	/*printf("length : %d\n", length);*/
	printf("배열의 최댓값 : %d\n", find_max(arr, length));
}

int find_max(int* pa, int size) {
	int max=*pa;

	for (int i = 0; i < size; i++) {
		if (*pa >= max) {
			max = *pa;
			pa++;
		}
	}
	return max;
}