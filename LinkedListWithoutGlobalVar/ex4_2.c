#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

int main(void) {
	listNode* L1 = head;
	listNode* p;

	printf("(1) 리스트에 [월], [수], [일] 노드 삽입하기! \n");
	insertLastNode(&L1, "월");
	insertLastNode(&L1, "수");
	insertLastNode(&L1, "일");
	printList(&L1);

	printf("\n(2) 리스트에서 [수] 노드 탐색하기! \n");
	p = searchNode(&L1, "수");
	if (p == NULL) {
		printf("찾는 데이터가 없습니다.\n");
	}
	else {
		printf("[%s]를 찾았습니다.\n", p->data);
	}
	getchar();

	return 0;
}