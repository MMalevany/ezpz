#include <stdlib.h>
#include <stdio.h>

int x; /// декларирую единственную переменную

int main(int argc, char const *argv[])
{
    scanf("%d", &x); /// ввод переменной с клавиатуры

    x=x*x*16; /// рассчитываю результат

    printf("%d", x); /// вывод результата на экран
    printf("\n");

    return 0;
}