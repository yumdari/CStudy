#include<stdio.h>

char* my_strcpy(char* pd, char* ps) {
	int cnt = 0; // main 함수 문자열 str의 길이

	for(int idx = 0; idx < 20; idx++)
		{
			if (pd[idx] == '\0') { // null 값이 나올 때까지 count
				break;
			}
			cnt++;
		}

	for (int jdx = 0; jdx < cnt; jdx++) { // main 함수 문자열 str의 길이만큼 수행
		*pd = *ps;
		pd++;
		ps++;
	}
}

int main(void) {
	
	char str[20] = "strawberry";

	my_strcpy(str, "apple"); // str에 문자열 "apple" 복사

	printf("바꾼 후 문자열 : %s\n", str);
	
	return 0;
}