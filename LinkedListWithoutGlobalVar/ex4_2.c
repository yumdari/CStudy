#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

int main(void) {
	listNode* L1 = head;
	listNode* p;

	printf("(1) ����Ʈ�� [��], [��], [��] ��� �����ϱ�! \n");
	insertLastNode(&L1, "��");
	insertLastNode(&L1, "��");
	insertLastNode(&L1, "��");
	printList(&L1);

	printf("\n(2) ����Ʈ���� [��] ��� Ž���ϱ�! \n");
	p = searchNode(&L1, "��");
	if (p == NULL) {
		printf("ã�� �����Ͱ� �����ϴ�.\n");
	}
	else {
		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
	}
	getchar();

	return 0;
}