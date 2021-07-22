#include <stdio.h>
#include <math.h>
int main(){
    float x = 1/3;
    float i;
    int count = 0;
    int y = 10000;
    int j = 0;
    float result;
    for(i = 0; i<x;i=i+0.01){
        for(j;j<=y;j++){
            result = pow(27,(3*i*i + i*j)) - (1+i*j)*pow(27,(18*i));
        }
    }

    printf("count = %f",result);

}
 
