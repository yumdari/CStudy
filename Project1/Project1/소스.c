# include < stdio.h >

int main(void) {
	for (int i = 0; i<=2 ; i++) {
		for (int j = 4; j-i*2>0 ;j--) {
			printf("&");
		}
		for (int k = 0; k*2+1>0 ;k++) {
			print("*");
		}
		printf("\n");
	}
	return 0;
}
