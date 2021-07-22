#include <stdio.h>

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}

void dem(int a[], int n){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if(a[i]<0)
            dem++;
    }
    if(dem > 0)
        printf("\nSo phan tu am trong mang la: %d\n ",dem);
    else
        printf("\nkhong co phan tu am trong mang\n");
    
}

void min(int a[], int n){
    int min = a[0];
    for (int i = 1; i < n; i++){
        if(a[i]<min)
            a[i] = min;
    }
    printf("\nPhan tu nho nhat trong mang la: %d",min);
}

int main(){
    int n;
    int arr[8];
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 3 || n >= 12){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 3 || n >= 12);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    dem(arr,n);
    min(arr,n);
}