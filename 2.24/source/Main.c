#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("請輸入一個整數: ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d為偶數\n", a);
	}
	else
		printf("%d為奇數\n", a);
	system("pause");
	return 0;
}