#include<stdio.h>
int main() {
    int n;
    printf("\nNhap so nguyen n: ");
    scanf("%d",&n);
    int Check = 1;
    while(n != 0){
    int donvi = n%10;
    if(donvi%2 != 0) { 
        Check = 0; 
        break;
    }
    n = n/10; 
    }
    if(Check == 1){
        printf("So toan chan");
    }
    else{
        printf("Khong phai so toan chan");
    }
    return 0;
}