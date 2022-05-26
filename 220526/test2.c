#include<stdio.h>

char* my_strcat(char* , char* );
char* my_strcpy(char* , char* );

int main(int argc, char* argv[]) {	

	char fruit[80] = "";

	//my_strcat(fruit, "berry");
	my_strcpy(fruit, "strawberry");
	printf("연결된 문자열 : %s\n", fruit);
	return 0;	//정상적으로 종료할 경우 0을 리턴
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
