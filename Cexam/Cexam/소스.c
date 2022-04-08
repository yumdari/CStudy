#include<stdio.h>
int main() {
	int i, j;
	int cnt = 0;
	int arr[100] = { 0 };
	int n = 100;
	int check=0;

	for (i = 2; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			arr[cnt] = i;
			cnt++;
		}
	}
	for (int k = 0; k < cnt; k++) {
			printf("%3d", arr[k]);
			check++;
			if (check == 5){
				printf("\n");
				check = 0;
		}
}

		return 0;
}