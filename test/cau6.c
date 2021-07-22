#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    int i;
    for( i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    int i;
    for( i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}

void SoChan(int a[], int n){
    int i;
    int dem = 0;
    for ( i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] % 3 == 0)
            dem++;  
    }
    if(dem !=0){
        for ( i = 0; i < n; i++){
            if(a[i] % 2 == 0 && a[i] % 3 == 0)
                printf("\nPhan tu a[%d] = %d", i, a[i]);
        }
    }
    else{
        printf("\nKhong co phan tu chan chia het cho 3 trong mang\n");
    }
    
    
}

int Nt(int n)

{

    if(n == 1) return 0;

    int i;

    for(i=2;i<=sqrt(n);i++)

    if(n%i == 0)

                return 0;

    return 1;

}

void TongNT(int a[],int n)

{

    int i;

    int snt=0;

    for(i=0;i<n;i++)

    {

    if(Nt(a[i]))

    {

        snt+=a[i];

    }

    }

    printf("Tong cac so nguyen to trong mang la: %d \n",snt);

}

int main(){
    int n;
    int arr[8];
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n < 1 || n >=8){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n < 1 || n >=8);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    printf("\n======SO CHAN=====\n");
    SoChan(arr,n);
    TongNT(arr,n);
}
    