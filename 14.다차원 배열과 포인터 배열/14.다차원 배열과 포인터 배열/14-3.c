#include<stdio.h>

int main(void) {
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++) {
		gets(animal[i]);
	}
	for (i = 0; i < count; i++) {
		printf("%s ", animal[i]);
	}
	return 0;
}