#include <stdio.h>
#include <string.h>

typedef struct friend
{
	char name[30];
	int age;
	int* p;
}Friend;

int main(void)
{
	Friend a;
	Friend b;

	strcpy_s(a.name, sizeof(a.name), "김철수"); //a.name = "김철수";는 안 된다!
	a.age = 20;

	strcpy_s(b.name, sizeof(a.name), "이영희"); //a.name = "이영희";는 안 된다!
	b.age = 25;
	b.p = &b.age;

	printf("첫 번째 친구는 %s이고 %d살이다.\n", a.name, a.age);
	printf("두 번째 친구는 %s이고 %d살이다.\n", b.name, *b.p); //포인터로 접근!

	return 0;
}