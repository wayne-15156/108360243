#include <stdio.h>
#include <stdlib.h>




int a, b;

int main(void)
{
	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &a, &b);
	
	if (a % b == 0)
	{
		printf("%d�O%d������\n", a, b);
	}

	else 
		printf("%d���O%d������\n", a, b);

	system("pause");
	return 0;
}