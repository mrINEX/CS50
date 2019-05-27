#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
        printf("What are hight?\n");
        n = get_int();
    }
    while (n>23);
    printf("Height: %i\n", n);
    for(int i=1; i<=n; i++)
    {
        for (int sp = i; sp < n; sp++)
        {
           printf(" ");
        }
        for (int sh = i; sh > -1; sh--)
        {
           printf("#");
        }
        printf("\n");
    }
}
