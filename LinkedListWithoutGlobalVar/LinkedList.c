#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LinkedList.h"

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(listNode** L) {
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

// ������ ���� �����ϴ� ����
void insertLastNode(listNode** L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L == NULL) {	// ���� ����Ʈ�� ������ ���
		L = newNode;	// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	// ���� ����Ʈ�� ������ �ƴ� ���
	temp = L;
	while (temp->link != NULL) {	// ���� ����Ʈ�� ������ ��带 ã��
		temp = temp->link;			// �� ��带 ������ ���(temp)�� ���� ���� ����
	}
	temp->link = newNode;
}
