#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#include <stdio.h>
#include <locale.h>
#include <math.h>
int zad1();
int zad2();
int result(int n);
int main() {
    (setlocale(LC_ALL, "RUS"));
    puts("Введите номер задания из лабораторной");
    int choise = 0;
    scanf("%d", &choise);
    switch (choise) {
    case 1:
        zad1();
        break;
    case 2:
        zad2();
        break;
    }
    getchar();
}
int zad1() {
    int row, col, first_number =20;
    printf("\n");
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= COL; ++col) {
            printf("%5d", col * row);
        }
        printf("\n");
	}
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= row; ++col) {
            printf("%5d", col * row);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < (5-i); j++) {
            printf("%5d", (20 - i) + j);
            first_number++;             
        }
        printf("\n");
    }
	system("pause");
    return 0;
}
int result(int n) {
    double sum = 0.0;
    if (n < 1) {
        printf("Ошибка: n должно быть больше или равно 1\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        double denominator = 2.0 * i + 1.0;
        sum += 1.0 / (denominator * denominator);
    }
    printf("\nСумма ряда для n = %d равна: %.6lf\n", n, sum);
}
int zad2() {
    int n;
    char again;
    do {
        printf("Вычисление суммы: 1/3^2 + 1/5^2 + 1/7^2 + ... + 1/(2n+1)^2\n");
        printf("Введите значение n: ");
        scanf("%d", &n);
        result(n);
        printf("\nХотите продолжить? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    printf("Программа завершена.\n");
    return 0;
}