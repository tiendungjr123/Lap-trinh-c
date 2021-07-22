#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int i;
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);

    int tong = 0;

    for(i=2; i<=20; i++){
        tong = tong+i;
        i+=1;
    }

    printf("Tong la: %d\n", tong);

    return 0;

}