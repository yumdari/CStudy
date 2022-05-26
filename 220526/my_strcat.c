#include<stdio.h>

char* my_strcat(char* str1, char* str2);

int main(int argc, char* argv[]) {	// argc : 전달인자의 갯수, argv : 전달된 인자들의 포인터 배열
									// 명령어 아규먼트, argument count : 문자의 갯수.
									// argv : 

	char fruit[80] = "straw";
	//char fruit[80] = { 's', 't', 'r', 'a', 'w' };
	//char fruit[80] = { 0 };
	printf("fruit : %s\n", fruit);

	//for (int i = 0; i < argc; i++) {
	//	printf("argv[%d] Pointer : %p\n", i, argv[i]);
	//	printf("argv[%d] : %s\n", i, argv[i]);
	//}
	/*int i = 0;
	while (1) {
		if (argv[i] != NULL) {
			printf("argv[%d] : %s\n", i, argv[i]);
			i++;
		}
		else
			break;
	}*/

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