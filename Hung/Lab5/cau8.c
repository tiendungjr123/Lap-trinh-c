#include<stdio.h>
#include <math.h>
int main(){
    int m,n;
    int tong =0;
    int i;
    do{
        printf("\nNhap so nguyen duong m: ");
        scanf("%d", &m);
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    }while(m<=0 || n<=0);

    // UCLN

    for (i=m;i>=1;i--){
        if (m%i==0 && n%i==0){
            printf("\nUCLN cua %d va %d la %d",m,n,i);
            break;
        }
    }

    // BCNN

     for (i=m;i<=m*n;i++){
        if (i%m==0 && i%n==0){
            printf("\nBCNN cua %d va %d la %d",m,n,i);
            break;
        }
    }

    return 0;
}