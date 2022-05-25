#include<stdio.h>

char* my_strcat(char* str1, char* str2);

int main(int argc, char * argv[]) {	// argc : 전달인자의 갯수, argv : 전달된 인자들의 포인터 배열
	
	int num0 = 0;
	int num1 = 1;
	int num2 = 2;

	printf("test : %d\n", *(&num2 + 3));
	char fruit[80] = "straw";
	my_strcat(fruit, "berry");
	printf("연결된 문자열 : %s\n", fruit);
	return 0;	//정상적으로 종료할 경우 0을 리턴
}

char* my_strcat(char* pd, char* ps) {
	int idx = 0;
	while (*(pd + idx) != '\0') {
		idx++;
	}
	while (*ps != '\0') {
		*(pd + idx) = *ps;
		idx++;
		ps++;
	}
	*(pd + idx) = '\0';
	return pd;
}