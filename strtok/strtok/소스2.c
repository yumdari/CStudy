#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����

int main()
{
    char s1[30] = "The Little Prince";  // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

    char* ptrArray[30] = {NULL};


    char* ptrArray = strtok(s1, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

    while (ptrArray != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
    {
        printf("%s\n", ptrArray);          // �ڸ� ���ڿ� ���
        ptrArray = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
    }

    return 0;
}