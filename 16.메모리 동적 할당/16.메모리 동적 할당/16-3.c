#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi; //������ ������ pi ����
	int size = 5; // �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int count = 0; // ���� �Էµ� ��� ����
	int num; // ����� �Է��� ����

	pi = (int*)calloc(size, sizeof(int)); // ������� 20����Ʈ(4����Ʈ*5) �Ҵ�
	//pi = (int*)malloc(5*sizeof(int));
	while (1) {
		printf("����� �Է��ϼ��� => ");
		scanf_s("%d", &num); // ������ �Է�
		if (num <= 0) break; // 0�Ǵ� �����̸� ����
		if (count == size) { // ���� ������ ��� ����ϸ�
			size += 5; // ũ�⸦ �÷��� ���Ҵ�
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (int idx = 0; idx < count; idx++) {
		printf("%5d", pi[idx]);
	}
	free(pi); // ���� �Ҵ� ���� ���� �ݳ�

	return 0;
}