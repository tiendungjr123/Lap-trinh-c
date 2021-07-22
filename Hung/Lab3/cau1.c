#include <stdio.h>

int main(){
  
    int a,b;
    printf("\nNhap so a: ");
    scanf("%d",&a);
    printf("\nNhap so b: ");
    scanf("%d",&b);
    
   
    if(a>b){
        printf("a > b");
    }
    else if(a<b){
        printf("a < b");
    }
    else{
        printf("a = b");
    }
    return 0;
 
}
