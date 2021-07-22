#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int i;
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);

    int tong = 0;

    for(i=1; i<=n; i++){
        tong = tong+i;
    }

    printf("Tong la: %d\n", tong);

    return 0;

}