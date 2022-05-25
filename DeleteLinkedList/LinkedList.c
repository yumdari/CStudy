#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LinkedList.h"

// ���� ���� ����Ʈ�� �����ϴ� ����
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;	// ���� ����Ʈ�̹Ƿ� NULL�� ����
	return L;
}

// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList_h(int* L) {
	listNode* p;
	while (*L != NULL) {
		p = *L;
		*L = *(*L);
		free(p);
		p = NULL;
	}
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(int* L) {
	listNode* p;
	printf("L=(");
	p = *L;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) {
			printf(",");
		}
	}
	printf(") \n");
}
// ù ��° ���� �����ϴ� ����
void insertFirstNode(int* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	// ������ �� ��� �Ҵ�
	strcpy(newNode->data, x);						// �� ����� ������ �ʵ忡 x ����
	newNode->link = L->head;
	L->head = newNode;
}

// ��带 pre �ڿ� �����ϴ� ����
void insertMiddleNode(int* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) {		// ���� ����Ʈ�� ���
		newNode->link = NULL;	// �� ��带 ù ��°���� ������ ���� ����
		L->head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = L->head;
		L->head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

// ������ ���� �����ϴ� ����
void insertLastNode(int* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {	// ���� ����Ʈ�� ������ ���
		L->head = newNode;	// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	// ���� ����Ʈ�� ������ �ƴ� ���
	temp = L->head;
	while (temp->link != NULL) {	// ���� ����Ʈ�� ������ ��带 ã��
		temp = temp->link;			// �� ��带 ������ ���(temp)�� ���� ���� ����
	}
	temp->link = newNode;
}

// ����Ʈ���� ��� p�� �����ϴ� ����
void deleteNode(int* L, listNode* p) {
	listNode* pre;					// ������ ����� ������ ��带 ��Ÿ�� ������
	if (L->head == NULL) {			// ���� ����Ʈ��� ���� ���� �ߴ�
		return;
	}
	if (L->head->link == NULL) {	// ����Ʈ�� ��尡 �� ���� �ִ� ���
		free(L->head);				// ù ��° ��带 �޸𸮿��� �����ϰ�
		L->head = NULL;				// ����Ʈ ���� �����͸� NULL�� ����
		return;
	}
	else if (p == NULL) return;		// ������ ��尡 ���ٸ� ���� ���� �ߴ�
	else {							// ������ ��� p�� ������ ��带 ������ pre�� �̿��� ã��
		pre = L->head;
		while (pre->link != p) {	// �� �Լ��� ����Ʈ
			pre = pre->link;
		}
		pre->link = p->link;		// ������ ��� p�� ������ ���� ���� ��带 ����
		free(p);					// ���� ����� �޸� ����
	}
}

// ����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(int* L, char* x) {
	listNode* temp;
	temp = L->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) {
			return temp;
		}
		else temp = temp->link;
	}
	return temp;
}
// ����Ʈ�� ��� ������ �������� �ٲٴ� ����
void reverse(int* L) {
	listNode* p;
	listNode* q;
	listNode* r;

	p = L->head;	// ������ p�� ù ��° ��忡 ����
	q = NULL;
	r = NULL;

	// ����Ʈ�� ù ��° ������ ��ũ�� ���� ���� ���� �̵��ϸ鼭
	// ��� ���� ������ �ٲ�

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	L->head = q;
}