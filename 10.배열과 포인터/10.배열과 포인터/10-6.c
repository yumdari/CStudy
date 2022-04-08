#include <stdio.h>

void print_arr(int* pa, int size);

int main(void) {
	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[] = { 10, 20, 30, 40, 50, 60, 70 };

	print_arr(arr1, sizeof(arr1)/sizeof(int));
	printf("\n");
	print_arr(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

void print_arr(int* pa, int size) {
	for (int idx = 0; idx < size; idx++) {
		printf("%d ", pa[idx]);
	}
}