#include<stdio.h>

int main(){
    int n;
    int tong =0;
    int i;
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    }while(n<=0);

    // cau a
    for(i=1;i<n;i++){
        tong+=i;
    }
    printf("\nTong_1 la: %d", tong);

    
    return 0;
}