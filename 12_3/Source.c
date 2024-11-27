#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int* pa, x = 5;
	pa = &x;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pa++;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pa--;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	//Смещение ячейки на 4
	puts("\n");
	double* pa1, x1 = 5.;
	pa1 = &x1;
	printf("По адресу %p хранится *ptr=%g\n", pa1, *pa1);
	pa1++;
	printf("По адресу %p хранится *ptr=%g\n", pa1, *pa1);
	pa1--;
	printf("По адресу %p хранится *ptr=%g\n", pa1, *pa1);
	//Смещение ячейки на 8
	puts("\n");
	char* pa2, x2 = '5';
	pa2 = &x2;
	printf("По адресу %p хранится *ptr=%g\n", pa2, *pa2);
	pa2++;
	printf("По адресу %p хранится *ptr=%g\n", pa2, *pa2);
	pa2--;
	printf("По адресу %p хранится *ptr=%g\n", pa2, *pa2);
	//Смещение ячейки на 1
	puts("\n");
	long double* pa3, x3 = 5.;
	pa3 = &x3;
	printf("По адресу %p хранится *ptr=%g\n", pa3, *pa3);
	pa3++;
	printf("По адресу %p хранится *ptr=%g\n", pa3, *pa3);
	pa3--;
	printf("По адресу %p хранится *ptr=%g\n", pa3, *pa3);
	//Смещение ячейки на 8
	puts("\n");
	short unsigned int* pa4, x4 = 5;
	pa4 = &x4;
	printf("По адресу %p хранится *ptr=%g\n", pa4, *pa4);
	pa4++;
	printf("По адресу %p хранится *ptr=%g\n", pa4, *pa4);
	pa4--;
	printf("По адресу %p хранится *ptr=%g\n", pa4, *pa4);
	//Смещение ячейки на 2
	puts("\n");
	_Bool* pa5, x5 = 1;
	pa5 = &x5;
	printf("По адресу %p хранится *ptr=%g\n", pa5, *pa5);
	pa5++;
	printf("По адресу %p хранится *ptr=%g\n", pa5, *pa5);
	pa5--;
	printf("По адресу %p хранится *ptr=%g\n", pa5, *pa5);
	//Смещение ячейки на 1
}