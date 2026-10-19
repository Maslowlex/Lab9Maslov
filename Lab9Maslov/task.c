#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#include <stdio.h>
#include <locale.h>
#include <math.h>
int zad1();
int main() {
    (setlocale(LC_ALL, "RUS"));
    puts("Введите номер задания из лабораторной");
    int choise = 0;
    scanf("%d", &choise);
    switch (choise) {
    case 1:
        zad1();
        break;
    /*case 2:
        zad2();
        break;
    case 3:
        zad3();
        break;
    case 4:
        zad4();
        break;
    case 5:
        homework();
        break;*/
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