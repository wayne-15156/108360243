#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, total ;

	printf("�п�J�H�U��T�ӭp��z�@�Ѷ}������O\n");

	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &a);

	printf("�T�o�@����/�[�ڦh�ֿ�: ");
	scanf_s("%f", &b);

	printf("�����@����/�[�گ��p�h�֤���: ");
	scanf_s("%f", &c);

	printf("�@�Ѫ������O:");
	scanf_s("%f", &d);

	printf("�@�Ѫ��q��O(�L���O): ");
	scanf_s("%f", &e);

	total = (a / c * b + d + e);

	printf("�z�@�Ѫ���O��%f\n", total);

	system("pause");
	return 0;
}