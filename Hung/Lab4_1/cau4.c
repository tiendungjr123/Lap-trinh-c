#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int i;
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);

    int Tong = 0;

    for(i=1; i<=n; i++){
        Tong = Tong + i*(i+1);
    }

    printf("Tong la: %d\n", Tong);

    return 0;

}