#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int i;
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);

    int tich = 1;

    for(i=1; i<=n; i++){
        tich = tich*i;
    }

    printf("Tich la: %d\n", tich);

    return 0;

}