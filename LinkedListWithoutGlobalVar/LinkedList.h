#pragma once	//����� �ߺ� ������ ����
// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
// 
// �ҽ� ���Ͽ��� 
// #ifndef LinkedList.h
// #define LinkedList.h
// ���ִ� �Ͱ� ����.

typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

listNode* head;

void printList(listNode** L);
void insertLastNode(listNode** L, char* x);