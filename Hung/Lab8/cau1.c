#include <stdio.h>
#include <string.h>
int main()
{

    char name[100];

    printf("Nhap chuoi: %s", name);
    gets(name);

    printf("Truoc khi dao nguoc : %s\n", name);

    printf("Sau khi dao nguoc   : %s\n", strrev(name));

    return 0;
}