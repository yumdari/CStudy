#include<stdio.h>

void print_arr(int* pa);

int main(void) {
	
	int arr[] = { 10, 20, 30, 40, 50 };
	print_arr(arr);
	return 0;
}

void print_arr(int* pa)
{
	for (int idx = 0; idx < 5; idx++) {
		printf("%d ", pa[idx]);
	}
}