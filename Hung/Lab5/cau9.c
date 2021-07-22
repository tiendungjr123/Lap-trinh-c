#include<stdio.h>
#include <math.h>
int main(){
    int n,k;
    int C;
    int i;
    
    int k_giaithua =1;
    int n_giaithua =1;
    int n_k_giaithua = 1;
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
        printf("\nNhap so nguyen duong k: ");
        scanf("%d", &k);
    }while(k<=0 || n<=k);
    
    // tinh n!
    for(i=n;i>0;i--){
        n_giaithua = n_giaithua*i;
    }

    // tinh k!
    for(i=k;i>0;i--){
        k_giaithua = k_giaithua*i;
    }
   
    // tinh (n-k)!
    int h = n -k;
    for(i=h;i>0;i--){
        n_k_giaithua = n_k_giaithua*i;
    }

    // tinh C(k,n)
    C = n_giaithua/(k_giaithua*n_k_giaithua);

    printf("\nTo hop chap %d cua %d la %d",k,n,C);
    return 0;

}