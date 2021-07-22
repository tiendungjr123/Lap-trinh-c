#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int sothang = 0;
    float tongtien = 0;

    printf("\nNhap so tien ban dau: ");
    scanf("%d", &n);

    while(tongtien<1000){
        sothang++;
        tongtien = n + n*0.007;
    }

    printf("\nSo thang can la: %d",sothang);
   
}