#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("�п�J�@�Ӿ��: ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d������\n", a);
	}
	else
		printf("%d���_��\n", a);
	system("pause");
	return 0;
}