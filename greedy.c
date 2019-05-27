#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float mon;
    int money;
    int count = 0;
    do
    {
        printf("How much change is owed?\n");
        mon = get_float();
        money = mon * 100;
    }
    while(mon<0.01);

    while(money>=25)
    {
        money = money - 25;
        count++;
    }
    while(money>=10)
    {
        money = money - 10;
        count++;
    }
    while(money>=5)
    {
        money = money - 5;
        count++;
    }
    while(money>=1)
    {
        money = money - 1;
        count++;
    }
    printf("%i\n", count);
}
