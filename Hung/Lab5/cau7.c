#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int Tich = 1;
    int i;
    printf("\nNhap gia tri cua n: ");
    scanf("%d", &n);
    if(n%2==0){
        for(i=2;i<=n;i++){
            Tich = Tich*i;
            i++;    
        }
    }
    else{
        for(i=1;i<=n;i++){
            Tich = Tich*i;
            i++;    
        }
    }

    printf("\nn!!= %d",Tich);
    return 0;
}