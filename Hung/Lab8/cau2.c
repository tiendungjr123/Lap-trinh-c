#include <stdio.h>
#include <string.h>
int main()
{

    char name[100];

    printf("Nhap chuoi: %s", name);
    gets(name);
    int i = 0;

    for (; i < strlen(name); i++)
    {
        if (name[i] != ' ')
        {
            printf("%c", name[i]);
        }
        else
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}