#include<stdio.h>

int main() {
	int weight;
	double height;
	double BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d%lf", &weight, &height);
	height /= 100;
	BMI = weight / (height * height);
	printf("%s", (BMI >= 20.0)&&(BMI <25.0)?"ǥ���Դϴ�.":"ü�߰����� �ʿ��մϴ�.");
	return 0;
}

