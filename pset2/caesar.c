#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        return 1;
    }
    int k;
    k = atoi(argv[1]);
    k = k % 26;
    string p = get_string();
    for(int i = 0, sl = strlen(p); i < sl; i++)
    {
        if(isalpha(p[i]))
        {
            if(isupper(p[i]))
            {
                int m = (p[i]-65+k)%26;
                printf("%c", m+65);
            }
            if(islower(p[i]))
            {
                int n = (p[i]-97+k)%26;
                printf("%c", n+97);
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}
