#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int count = 0;
    int i;

    // kiem tra so nguyen duong
    do{
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    }while(n<=2);

    // dem so chu so
    int tmp = n;
    while(tmp!=0){
        count++;
        tmp=tmp/10;
    }
    printf("\n%d co so chu so la %d",n,count);
    return 0;
   
}