#include <stdio.h>

void NhapMang(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
// dem so luong phan tu x xuat hien trong mang
void dem(int a[], int n)
{
    int count = 0;
    int i;
    int x;
    printf("\nNhap phan tu x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    printf("\nSo luong phan tu x co trong mang la %d", count);
}

// tong cac so trong mang
void sum(int a[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nTong cac phan tu trong mang la %d", sum);
}

// tinh trung binh cac gia tri trong mang
void Tbcong(int a[], int n)
{
    int sum = 0;
    int i;
    int count = 0;
    float tb;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        count++;
    }
    tb = sum / count;
    printf("\nTrung binh cac phan tu trong mang la %0.2f", tb);
}

// gia tri lon nhat trong mang
void max(int a[], int n)
{
    int max = a[0];
    int i;
    for (i = 1; i < n; i++)
        if (max < a[i]){
            max = a[i];
        }
    printf("\nPhan tu lon nhat trong mang la: %d", max);
}

// tong so chan trong mang
void TongChan(int a[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    printf("\nTong cac phan tu chan trong mang la %d", sum);
}

// tim so chan lon nhat trong mang
void Find(int a[], int n)
{
    int max = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] > max)
                max = a[i];
        }
    }
    printf("\nPhan tu chan lon nhat trong mang la %d", max);
}

int main()
{
    int n;
    int arr[15];
    printf("\nNhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > 15)
        {
            printf("\nNhap lai so luong phan tu: ");
        }
    } while (n <= 0 || n > 15);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    dem(arr, n);
    sum(arr, n);
    Tbcong(arr, n);
    max(arr, n);
    TongChan(arr, n);
    Find(arr, n);
}