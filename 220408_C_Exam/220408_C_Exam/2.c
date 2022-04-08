#include<stdio.h>

void swap(int *pa, int *pb) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(void) {

	int a = 20, b = 30;

	swap(&a, &b);

	printf("a:%d, b:%d\n", a, b);

	return 0;
}