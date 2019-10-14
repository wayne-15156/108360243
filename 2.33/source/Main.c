#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, total ;

	printf("請輸入以下資訊來計算您一天開車的花費\n");

	printf("一整天的總里程數:");
	scanf_s("%f", &a);

	printf("汽油一公升/加侖多少錢: ");
	scanf_s("%f", &b);

	printf("平均一公升/加侖能行駛多少公里: ");
	scanf_s("%f", &c);

	printf("一天的停車費:");
	scanf_s("%f", &d);

	printf("一天的通行費(過路費): ");
	scanf_s("%f", &e);

	total = (a / c * b + d + e);

	printf("您一天的花費為%f\n", total);

	system("pause");
	return 0;
}