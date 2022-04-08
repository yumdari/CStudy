#include <stdio.h>
int main() {
	char arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = ' ';
		}
	}
	for (int i = 0; i < 5; i++) {
		arr[i][i] = '*';
		for (int j = 5; j > 0; j--) {
			arr[j][j] = '*';
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
