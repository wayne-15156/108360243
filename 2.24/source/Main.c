#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("叫块俱计: ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d案计\n", a);
	}
	else
		printf("%d计\n", a);
	system("pause");
	return 0;
}