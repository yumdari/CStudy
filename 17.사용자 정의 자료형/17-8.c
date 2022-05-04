/// 함수에서 -> 연산자를 사용하여 구조체 배열의 값 출력

#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp)
{
	for (int idx = 0; idx < 5; idx++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp + idx)->name, (lp + idx)->age, (lp + idx)->tel, (lp + idx)->addr);
	}
}

int main(void)
{
	struct address list[5] = {
	{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};
	print_list(list);

	return 0;
}

