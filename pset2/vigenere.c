#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string k = argv[1];
    if(argc != 2)
    return 1;
    int str = strlen(argv[1]);
    for(int x = 0; x < str ; x++)
    {
        if(isalpha(k[x]))
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    string p = get_string();
    for(int i = 0, kk = 0, sl = strlen(p); i < sl; i++, kk++)
    {
        if(isalpha(p[i]))
        {
            if(isupper(p[i]))
            {
                if(isupper(k[kk%str]))
                {
                    int isupk = (k[kk%str]-65 + p[i]-65)%26;
                    printf("%c", isupk+65);
                }
                if(islower(k[kk%str]))
                {
                    int islowk = (k[kk%str]-97 + p[i]-65)%26;
                    printf("%c", islowk+65);
                }
            }
            if(islower(p[i]))
            {
                if(isupper(k[kk%str]))
                {
                    int isupk = (k[kk%str]-65 + p[i]-97)%26;
                    printf("%c", isupk+97);
                }
                if(islower(k[kk%str]))
                {
                    int islowk = (k[kk%str]-97 + p[i]-97)%26;
                    printf("%c", islowk+97);
                }
            }
        }
        else
        {
            kk--;
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}
