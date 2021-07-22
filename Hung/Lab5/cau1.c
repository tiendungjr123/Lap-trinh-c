#include<stdio.h>

int main(){
    int n;
    int tong_1 =0;
    int tong_2 =0;
    int tong_3 =0;
    int i;
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    }while(n<=0);

    // cau a
    for(i=1;i<=n;i++){
        tong_1+=i;
    }
    printf("\nTong_1 la: %d", tong_1);

    // cau b
    for(i=0;i<=n;i++){
        tong_2 = tong_2 + (1+2*i);
    }
    printf("\nTong_2 la: %d", tong_2);

    // cau c
    for(i=0;i<=2*n;i++){
       if(i%2==0){
           tong_3 = tong_3+i;
       }
    }
    printf("\nTong_3 la: %d", tong_3);
    return 0;
}