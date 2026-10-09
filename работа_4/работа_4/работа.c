#define _CRT_SECURE_NO_DEPRECATE

#include <locale.h>

#include <stdio.h>

task1();

int main()

{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
	homework();
	return 0;
}

int task1()

{
	setlocale(LC_ALL, "RUS");
	char c = '!';
	int i = 2;
	int intpart;
	float f = 3.14f;
	double d = 5e-12;
	printf("задание1\n");
	printf("%c\n%d\n%.2f\n%g\n",c,i,f,d);
	printf("введите символ:\n ");
	scanf("%c", &c);
	printf("введите целое число:\n ");
	scanf("%d", &i);
	printf("введите число с плавающей точкой(разделитель запятой):\n ");
	scanf("%f", &f);
	printf("целая часть числа с точкой - %d\n", (int)f);
	printf("\n");
	printf("дробная часть числа с точкой - %3.3f\n", f-(int)f);
	printf("\n");
	printf("десятичный код символа - %d\n", c);
	printf("\n");
	printf("шестнадцатеричный код символа - %x\n", c);
	printf("\n");
	printf("число, соответствующее записи 1/i - %4.3f\n", 1/(float)i);
	return 0;
}

int task2()
{
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("задание2\n");
	printf("x = %d, y = %f, z = %17.15f\n", x, y, z);
	printf("Так как a и b относятся к типу int, то результат их деления будет также целочисленным, независимо от типа переменной к которой она относится\n");
	printf("\n");
	printf("выполнил явные преобразования float и double\n");
	printf("x = %d, y = %f, z = %17.15f\n", a/b, (float)a/b, (double)a/b);
	printf("int - вывод целочисленног результата float - вывод числа с плавающей точкой(без настроек чисел после запятой - 6) double - запоминает больше чисел чем float\n");
	return 0;
}

int task3()
{
	int n;
	printf("задание3\n");
	printf("введите целое трёхзначное число - ");
	scanf("%d", &n);
	printf("\n");
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	printf("первая цифра - %d\n", n1);
	printf("последняя цифра - %d\n", n3);
	printf("сумма - %d\n", n1+n2+n3);
	printf("перевёрнутое число - %d\n", n3*100+n2*10+n1);
	return 0;
}

int homework()
{
	int a, b, c;
	printf("домашка\n");
	printf("Введите силу первого героя - ");
	scanf("%d", &a);
	printf("\n");
	printf("Введите силу первого героя - ");
	scanf("%d", &b);
	printf("\n");
	printf("Введите силу первого героя - ");
	scanf("%d", &c);
	printf("\n");
	int res = ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0));
	printf("успешность атаки(1 - успешно, 0 - неуспешно) - %d", res);
}