#include<stdio.h>

double find_max(double* pa, int size) {
	double max = 0;
	
	for (int idx = 0; idx < size; idx++) {
		if (*pa > max) {
			max = *pa;
		}
		pa++;
	}

	return max;
}

int main(void) {

	double max;

	double ary[] = { 2.5, 3.1, 5.5, 7.1, 4.6, 9.9, 1.5 };

	int length = (sizeof(ary) / sizeof(double));

	max = find_max(ary, length);

	printf("%배열의 최대값 : %.1lf", max);


	return 0;
}