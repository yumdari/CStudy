#include <stdio.h>

char* user_strcpy(char* str1, char* str2) {
	int idx = 0;
	while (*(str1+idx) != '\0') {
		idx++;
	}
	while (*str2 != '\0') {
		*(str1+idx) = *str2;
		idx++;
		str2++;
	}
	*(str1 + idx) = '\0';
	return str1;
}

int main(void) {
	char fruit[80] = "straw";
	printf("%s", user_strcpy(fruit,"berry"));
	return 0;
}

