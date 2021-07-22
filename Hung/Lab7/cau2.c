#include <stdio.h>
#include <math.h>
// tim uoc chung lon nhat
int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

// tinh x mu n

int xMUn(int x, int n)
{
    if (n == 0)
        return 1;
    return x * xMUn(x, n - 1);
}

// tinh to hop chap k cua n

int C(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    int m, n, x, k;
    printf("\nNhap m: ");
    scanf("%d", &m);
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\nUCLN(%d, %d) = %d", m, n, UCLN(m, n));

    printf("Nhap x: ");
    scanf("%d", &x);
    printf("\n%d mu %d = %d", x, n, xMUn(x, n));

    printf("\nNhap k: ");
    scanf("%d", &k);
    printf("To hop chap %d cua %d = %d", k, n, C(k, n));
}