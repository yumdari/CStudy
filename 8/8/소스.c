#include<stdio.h>
//�迭�� �����ʹ� ������, ���� �ٲ� �� �ִ�!
int main(void) {
	int arr[5];
	//arr = &arr[0]
	arr[0] = 10; // *(arr+0)
	arr[1] = 20; // *(arr+1)
	arr[2] = arr[0] + arr[1]; // *(arr+2)
	scanf("%d", &arr[3]);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\b", arr[4]);

	return 0;
}