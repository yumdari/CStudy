#include<stdio.h>

char* my_strcpy(char* pd, char* ps) {
	int cnt = 0; // main �Լ� ���ڿ� str�� ����

	for(int idx = 0; idx < 20; idx++)
		{
			if (pd[idx] == '\0') { // null ���� ���� ������ count
				break;
			}
			cnt++;
		}

	for (int jdx = 0; jdx < cnt; jdx++) { // main �Լ� ���ڿ� str�� ���̸�ŭ ����
		*pd = *ps;
		pd++;
		ps++;
	}
}

int main(void) {
	
	char str[20] = "strawberry";

	my_strcpy(str, "apple"); // str�� ���ڿ� "apple" ����

	printf("�ٲ� �� ���ڿ� : %s\n", str);
	
	return 0;
}