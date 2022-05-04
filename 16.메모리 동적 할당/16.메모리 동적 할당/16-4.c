#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char temp[80];
	char* str[3];
	int idx = 0;

	for (idx = 0; idx < 3; idx++) {
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[idx] = (char*)malloc(strlne(temp) + 1);
		strcpy(str[idx], temp);
	}

	for (idx = 0; idx < 3; idx++) {
		printf("%s\n", str[idx]);
	}

	for (idx = 0; idx < 3; idx++) {
		free(str[idx]);
	}

	return 0;
}