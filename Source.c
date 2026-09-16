#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x1, y1, x2, y2;
	float res;
	puts("введите координаты 1 точки");
	scanf_s("%d%d", &x1, &y1);
	puts("введите координаты 2 точки");
	scanf_s("%d%d", &x2, &y2);
	res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("Расстояние равно %.1f", res);
}