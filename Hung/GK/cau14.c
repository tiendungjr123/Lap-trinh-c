#include <stdio.h>
#include <math.h>

long tinhGiaithua(int n)
{

    if (n > 0)
    {

        return n * tinhGiaithua(n - 1);
    }
    else
    {

        return 1;
    }
}

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
        S = S + ((tinhGiaithua(i)) / i);
    }

    printf("\nS = %d", S);
}