#include<stdio.h>
int prime_check(int n) {
	int cnt = 0; // �迭�� ����
	int idx, jdx, kdx; // �ݺ��� ����
	int arr[100] = { 0 }; // ���̰� 100�� ������ �迭 ���� �� �ʱ�ȭ
	int space = 0; // ������ ���� ����

	for (idx = 2; idx < n; idx++)
	{
		for (jdx = 2; jdx < idx; jdx++) // 2���� n-1�� ��
		{
			if (idx % jdx == 0) { // �Ҽ��� �ƴ϶�� �Ǻ��Ǹ� �ݺ��� Ż��
				break;
			}
		}
		if (idx == jdx) { 
			arr[cnt] = idx;
			cnt++; // �迭�� ���̸� �˾Ƴ�
		}
	}
	for (kdx = 0; kdx < cnt; kdx++) {
		printf("%4d", arr[kdx]);
		space++;
		if (space == 5) { // 5�� ��¸��� ����
			printf("\n");
			space = 0; // ���� �� space ������ 0���� �ʱ�ȭ
		}
	}
}

int main(void) {
	int num;

	scanf_s("%d", &num); // ���� �Է�

	prime_check(num);

	return 0;
}