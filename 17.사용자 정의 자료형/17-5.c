/// 구조체를 반환하여 두 변수의 값 교환

#include <stdio.h>

struct vision // 새로운 자료형 선언
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // 구조체 자료형의 형태로 반환. 매개변수로 구조체 들어감
//int exchange(int) 
//int exchange(int a)

int main(void)
{
	struct vision robot;

	printf("시력 입력 : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}