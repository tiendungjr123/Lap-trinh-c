#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int i;
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);

    float tong = 0;

    for(i=1; i<=n; i++){
        tong = tong + 1.0/i;
    }

    printf("Tong la: %f\n", tong);

    return 0;

}