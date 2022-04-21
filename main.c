#include <stdio.h>
#include <windows.h>



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    printf("Введите два целых числа\n");
    printf("Первое число : ");
    scanf ("%d", &a);
    printf("Второе число : ");
    scanf ("%d", &b);
    return 0;
}
