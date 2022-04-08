# include < stdio.h >

int main(void) {
	for (int i = 0; i <= 2; i++) {
		for (int j = 4; j - i * 2 > 0; j--) {
			printf(" ");
		}
		for (int k = 1; k<=i*2+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
