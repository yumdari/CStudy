#include<stdio.h>

int main(void) {
	int i=0, *i_ptr=&i;
	double d=0, *d_ptr=&d;
	char c=0, *c_ptr=&c; 

	printf("int형 변수의 주소 %d, %u\n", &i, i_ptr);
	printf("double형 변수의 주소 %d, %u\n", &d, d_ptr);
	printf("char형 변수의 주소 %d, %u\n", &c, c_ptr);

	return 0;
}