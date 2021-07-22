#include <stdio.h>

int TICHCHANLE1(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 0)
    {
        return TICHCHANLE1(n - 1);
    }
    else
    {

        return n * TICHCHANLE1(n - 1);
    }
}

int TICHCHANLE2(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 != 0)
    {
        return TICHCHANLE2(n - 1);
    }
    return n * TICHCHANLE2(n - 1);
}

int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if (n % 2 != 0)
    {

        printf("\nTich la: %d", TICHCHANLE1(n));
    }
    else
    {
        printf("\nTich la: %d", TICHCHANLE2(n));
    }
}