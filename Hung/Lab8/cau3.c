#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, j;
    char s[100];

    printf("Nhap chuoi: %s", s);
    gets(s);
    n = strlen(s);

    for (i = 0; i < n; i++)
    {
        if ((s[i] == ' ') && (s[i + 1] == ' '))
        {
            for (j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("Chuoi sau khi cat:\n");
    for (i = 0; i < n; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}