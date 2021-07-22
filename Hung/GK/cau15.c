#include <stdio.h>
#include <math.h>

int main()
{
    int n;       // dau vao
    int max = 0; // dau ra
    int a;       // bien trung gian
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    while (n > 0)
    {
        a = n % 10;
        n = n / 10;

        if (a > max)
        {
            max = a;
        }
    }

    printf("\nMax  = %d", max);
}