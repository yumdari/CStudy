#include <stdio.h>

void str_print(char* ptr) {
	int cnt = 0;
	char s1[5] = { 0 };
	while (*(ptr+cnt) != '\0') {
		s1[cnt] = *(ptr+cnt);
		cnt++;
	}
	s1[cnt] = '\0';
	printf("�迭 ���ڿ� ��ȯ : %s\n", s1);
}
int main(void) {
	char str[] = "test";
	str_print(str);
}

