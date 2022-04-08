#include<stdio.h>

//output

void print(int* ptr1, int* ptr2, int arrsize1, int arrsize2) {
	for (int i = 0; i < (arrsize1 / sizeof(ptr1[0])); i++) {
		printf("%d ", ptr1[i]);
	}printf("\n");
	for (int i = 0; i < (arrsize2 / sizeof(ptr2[0])); i++) {
		printf("%d ", ptr2[i]);
	}printf("\n");
}

int main(void) {
	
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,3};
	int size1 = sizeof(arr1);
	int size2 = sizeof(arr2);
	print(arr1, arr2, size1, size2);

	return 0;
}

