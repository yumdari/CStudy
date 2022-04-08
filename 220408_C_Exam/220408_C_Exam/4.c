#include<stdio.h>

void print(int* pa, int size) {
	for (int idx = 0; idx < size; idx++) { // �迭 ���̸�ŭ index�� 1�� ����
		printf("%4d", pa[idx]); 
	}
}

int main() {

	int ary1[] = { 10, 20, 30, 40, 50 };
	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };

	int aryLength1 = (sizeof(ary1) / sizeof(ary1[0])); // �迭 ��ü ũ��/�迭 1�� ũ�� : 5
	int aryLength2 = (sizeof(ary2) / sizeof(ary2[0])); // �迭 ��ü ũ��/�迭 1�� ũ�� : 7

	print(ary1, aryLength1);
	printf("\n");
	print(ary2, aryLength2);

	return 0;
}