#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int tong =0;
    int i;

    // kiem tra so nguyen duong
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    }while(n<=0);

   // kiem tra so nguyen to
   int count = 0;
    
    for( i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}