#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float bmi, weight, height;

	printf("�п�J����(����): ");
	scanf_s("%f", &height);

	printf("�п�J�魫(����): ");
	scanf_s("%f", &weight);

	printf("BMI VALUES\n");
	printf("Underweight:\tless then 18.5\n");
	printf("Normal:\t\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t\t30 or greater\n\n");
	
	bmi = (weight / height/height);
	printf("�z��BMI�ȬO:%f\n", bmi);

	system("pause");
	return 0;
}