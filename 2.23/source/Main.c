#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=0, b=0, c=0;
	int num0 =0, num1=0, num2=0;
	

	printf("請輸入三個整數 數字請用空格區別: ");
	scanf_s("%d%d%d", &a,&b,&c);
	
	if (a > b & b > c )

	{
		num0 = a;
		num1 = b;
		num2 = c;
		
	}
	
	if ( a > c & c > b )
	{
		num0 = a ;
		num1 = c ;
		num2 = b;
	}

	if (b > a& a > c)
	{
		num0 = b;
		num1 = a;
		num2 = c;

	}

	if (b > c& c > a)
	{
		num0 = b;
		num1 = c;
		num2 = a;

	}
	if (c > a& a > b)
	{
		num0 = c;
		num1 = a;
		num2 = b;

	}
	if (c > b& b > a)
	{
		num0 = c;
		num1 = b;
		num2 = a;

	}
	printf("您輸入的數字關係為%d>%d>%d\n", num0,num1,num2 );

	system("pause");
	return 0;
}