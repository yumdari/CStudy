#include<stdio.h>

//output
// pa : ~
// pb : ~
//pb - pa : 2
//�տ� �ִ� �迭 ����� �� ��� : 20
//pa pb ���� �� �߿� �տ� �ִ°� �����

int main(void) {
	int arr[] = { 10,20,30,40,50 };
	int* pa = arr;
	int* pb = pa + 3;
	pa++;
	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("%u\n", pb-pa);
	printf("%d", pa>pb?*pa:*pb);

	return 0;
}