#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
/*
int main(int argc, string argv[])
{
    for(int a = 1; a < argc; a++)
    {
        for(int i = 0, n = strlen(argv[a]); i < n; i++)
        {
            argv[a][0] = toupper(argv[a][0]);
            printf("%c", argv[a][0]);
            break;
        }
    }
    printf("\n");
}*/

int main()
{
    string s = get_string();
    printf("%c", s[0]=toupper(s[0]));
    for(int i = 0, j = strlen(s); i < j; i ++)
    {
        if(s[i] == ' ')
        {
            i++;
            printf("%c", s[i] = toupper(s[i]));
        }
    }
    printf("\n");
}
