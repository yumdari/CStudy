#include<stdio.h>

int main(void) {
	for (int idx=0; idx < 3; idx++) { // array[3][5]
		for (int jdx = 4; jdx >idx*2 ; jdx--) {
			printf(" "); // ���� ���� ���
		}
		for (int kdx = 0; kdx < idx * 2 + 1; kdx++) {
			printf("*"); // �� ���
		}
		printf("\n");
	}
	return 0;
}