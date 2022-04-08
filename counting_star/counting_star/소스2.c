#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i ; j--) {
			printf("*");
		}
		printf("\n");
	}printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 4; j-i>0 ; j-- ) {
			printf(" ");
		}
		for (int k = 0;  k<i+1;  k++) {
			printf("*");
		}
		printf("\n");
	}printf("\n");
	

	for (int i = 0; i<5 ; i++ ) {
		for (int j = 4; j-i>0; j--) {
			printf(" ");
		}
		for (int k = 0; k<i*2+1 ;k++ ) {
			printf("*");
		}
		printf("\n");
	}




	return 0;
}