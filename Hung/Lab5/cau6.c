#include<stdio.h>

int main(){
    int n;
    int tong =0;
    int i;
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
        tong = tong+n;
    }while(n>0);

    printf("\nTong la: %d",tong);
    return 0;
}