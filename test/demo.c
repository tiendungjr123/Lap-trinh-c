#include <stdio.h>
#include <math.h>

int check(int a[], int i, int value)
{
    int j;
    for (j = 0; j < i; j++)
        if (a[j] == value)
            return j;
    return -1;
}
void NhapMang(int a[], int n)
{
    int i;
    int value;
    for (i = 0; i < n;i++)
    {
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
        if (check(a, i, a[i]) != -1)
        {
            printf("Trung voi A[%d],moi nhap lai :\n", check(a, i, a[i-1]));
        }
        

        if (a[i] == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    int a[100];
    printf("\nNhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n < 1 || n >= 99)
        {
            printf("\nNhap lai so luong phan tu: ");
        }
    } while (n < 1 || n >= 99);
    NhapMang(a, n);
}