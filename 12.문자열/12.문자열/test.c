#include <stdio.h>

void str_print(char m_str[]) {
	int cnt = 0;
	char s1[5] = { 0 };
	while (m_str[cnt] != '\0') {
		s1[cnt] = m_str[cnt];
		cnt++;
	}
	s1[cnt] = '\0';
	printf("배열 문자열 변환 : %s\n", s1);
}

int main(void) {
	char str[] = "test";
	str_print(str);
}