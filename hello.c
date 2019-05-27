#include <stdio.h>
//квадрат числа
int sqr(int a)
{
    return a * a;
}
//приветствие
void test (void)
{
    printf("Hello everyone!\n");
}
//главная функция
int main(void)
{
    test();
    printf("%d\n", sqr(5));
}
