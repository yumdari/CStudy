#include<stdio.h>

void swap(int* x, int* y) {
	int temp;

	temp = *x; // a
	*x = *y;
	*y = temp;
}

int main(void) {

	int a = 30, b = 10;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;

	}