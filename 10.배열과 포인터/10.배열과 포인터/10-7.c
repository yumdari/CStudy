#include<stdio.h>

//void input_arr(double* pa, int size);
double find_max(double* pa, int size);

int main(void) {
	double arr[5] = { 1.4, 3.7, 3.3, 2.5, 1.8 };
	double max;
	int size = sizeof(arr) / sizeof(double); // 40/8 = 5

	//input_arr(arr, size);
	max = find_max(arr, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

//void input_arr(double* pa, int size) {
//	printf("%d개의 실수값 입력 : ", size);
//	for (int idx = 0; idx < size; idx++) {
//		scanf_s("%lf", pa + idx);
//	}
//}

double find_max(double* pa, int size) {
	double max;
	max = pa[0];

	for (int idx = 0; idx < size; idx++) { // size = 5
		if (pa[idx] > max) {
			max = pa[idx];
		}
	}
	return max;
}