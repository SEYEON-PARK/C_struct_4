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

	strcpy_s(a.name, sizeof(a.name), "��ö��"); //a.name = "��ö��";�� �� �ȴ�!
	a.age = 20;

	strcpy_s(b.name, sizeof(a.name), "�̿���"); //a.name = "�̿���";�� �� �ȴ�!
	b.age = 25;
	b.p = &b.age;

	printf("ù ��° ģ���� %s�̰� %d���̴�.\n", a.name, a.age);
	printf("�� ��° ģ���� %s�̰� %d���̴�.\n", b.name, *b.p); //�����ͷ� ����!

	return 0;
}