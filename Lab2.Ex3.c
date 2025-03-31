#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	// Налаштування локалі для підтримки української мови
	setlocale(LC_ALL, "Ukrainian");
	int a, b;
	double x;

	// Запитуємо користувача ввести значення a та b
	printf("Введiть цiле значення для a: ");
	scanf("%d", &a);

	printf("Введiть цiле значення для b: ");
	scanf("%d", &b);

	// Обчислюємо значення функції (без перевірки на від'ємний корінь)
	// Увага: Якщо a - b*b < 0 або a * b < 0, результат буде NaN (Not a Number)
	x = sqrt(a - b * b) + sqrt(a * b);

	// Виводимо результат
	printf("Значення функцiї x = %.2f\n", x);

	return 0;
}
