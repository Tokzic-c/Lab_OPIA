#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int* pa, x = 5;
	pa = &x;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	pa++;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	pa--;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	//�������� ������ �� 4
	puts("\n");
	double* pa1, x1 = 5.;
	pa1 = &x1;
	printf("�� ������ %p �������� *ptr=%g\n", pa1, *pa1);
	pa1++;
	printf("�� ������ %p �������� *ptr=%g\n", pa1, *pa1);
	pa1--;
	printf("�� ������ %p �������� *ptr=%g\n", pa1, *pa1);
	//�������� ������ �� 8
	puts("\n");
	char* pa2, x2 = '5';
	pa2 = &x2;
	printf("�� ������ %p �������� *ptr=%g\n", pa2, *pa2);
	pa2++;
	printf("�� ������ %p �������� *ptr=%g\n", pa2, *pa2);
	pa2--;
	printf("�� ������ %p �������� *ptr=%g\n", pa2, *pa2);
	//�������� ������ �� 1
	puts("\n");
	long double* pa3, x3 = 5.;
	pa3 = &x3;
	printf("�� ������ %p �������� *ptr=%g\n", pa3, *pa3);
	pa3++;
	printf("�� ������ %p �������� *ptr=%g\n", pa3, *pa3);
	pa3--;
	printf("�� ������ %p �������� *ptr=%g\n", pa3, *pa3);
	//�������� ������ �� 8
	puts("\n");
	short unsigned int* pa4, x4 = 5;
	pa4 = &x4;
	printf("�� ������ %p �������� *ptr=%g\n", pa4, *pa4);
	pa4++;
	printf("�� ������ %p �������� *ptr=%g\n", pa4, *pa4);
	pa4--;
	printf("�� ������ %p �������� *ptr=%g\n", pa4, *pa4);
	//�������� ������ �� 2
	puts("\n");
	_Bool* pa5, x5 = 1;
	pa5 = &x5;
	printf("�� ������ %p �������� *ptr=%g\n", pa5, *pa5);
	pa5++;
	printf("�� ������ %p �������� *ptr=%g\n", pa5, *pa5);
	pa5--;
	printf("�� ������ %p �������� *ptr=%g\n", pa5, *pa5);
	//�������� ������ �� 1
}