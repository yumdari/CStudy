#include<stdio.h>

char* my_strcat(char* , char* );
char* my_strcpy(char* , char* );

int main(int argc, char* argv[]) {	

	char fruit[80] = "";

	//my_strcat(fruit, "berry");
	my_strcpy(fruit, "strawberry");
	printf("����� ���ڿ� : %s\n", fruit);
	return 0;	//���������� ������ ��� 0�� ����
}

char* my_strcat(char* pd, char* ps) {
	int* po = pd;
	
	while (*pd != '\0') {
		pd++;
	}
	while (*ps != '\0') {
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return 0;

}

char* my_strcpy(char* pd, char* ps) {

	while (*ps != '\0') {
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return 0;

}
