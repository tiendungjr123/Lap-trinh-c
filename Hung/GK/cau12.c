#include <stdio.h>
#include <math.h>

int main()
{
    int n;     // dau vao
    int S = 0; // dau ra
    int i;     // bien trung gian

    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    for (i = 1; i <= n; i++)
    {
        S = S + (i + 1) / (sqrt(i));
    }

    printf("\nS = %d", S);
}