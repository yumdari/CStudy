#include<stdio.h>

int main(void) {
	int hour = 0, min = 0, sec = 0; // 시, 분, 초를 저장할 변수
	double time = 3.76;				// 시간 초기화
	hour = (int)time;
	time = time - hour;
	time *= 60;
	min = (int)time;
	time = time - min;
	time *= 60;
	sec = (int)time;

	printf("3.76 시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

	return 0;
}