/// ����ü�� ��ȯ�Ͽ� �� ������ �� ��ȯ

#include <stdio.h>

struct vision // ���ο� �ڷ��� ����
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // ����ü �ڷ����� ���·� ��ȯ. �Ű������� ����ü ��
//int exchange(int) 
//int exchange(int a)

int main(void)
{
	struct vision robot;

	printf("�÷� �Է� : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

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