#include<stdio.h>

int main(void) {
	int hour = 0, min = 0, sec = 0; // ��, ��, �ʸ� ������ ����
	double time = 3.76;				// �ð� �ʱ�ȭ
	hour = (int)time;
	time = time - hour;
	time *= 60;
	min = (int)time;
	time = time - min;
	time *= 60;
	sec = (int)time;

	printf("3.76 �ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);

	return 0;
}