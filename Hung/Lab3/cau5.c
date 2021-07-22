#include <stdio.h>

int main(){
  
    float soKW;
    int dongia;

    printf("\nNhap so KW: ");
    scanf("%f",&soKW);
    
    if(soKW>=1 && soKW<=100){
        dongia = 5;
    }
    else if(soKW>100 && soKW<=150){
        dongia = 7;
    }
    else if(soKW>150 && soKW<=200){
        dongia = 10;
    }
    else if(soKW>200 && soKW<=300){
        dongia = 15;
    }
    else{
        if(soKW>300){
        dongia = 20;
        }
    }
    printf("\nDon gia: %d$",dongia);
    return 0;

 
}
 