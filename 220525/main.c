#include<stdio.h>

char* my_strcat(char* str1, char* str2);

int main(int argc, char * argv[]) {	// argc : ���������� ����, argv : ���޵� ���ڵ��� ������ �迭
	
	int num0 = 0;
	int num1 = 1;
	int num2 = 2;

	printf("test : %d\n", *(&num2 + 3));
	char fruit[80] = "straw";
	my_strcat(fruit, "berry");
	printf("����� ���ڿ� : %s\n", fruit);
	return 0;	//���������� ������ ��� 0�� ����
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