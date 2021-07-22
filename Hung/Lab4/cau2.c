#include <stdio.h>
#include <math.h>
int main(){
    
    printf("\nChon 1 de in ra man hinh: Xin chao cac ban");
    printf("\nChon 2 de chuyen do C sang do F");
    printf("\nChon 3 de tinh chu vi va dien tich hinh tron");
    printf("\nChon 4 de ket thuc chuong trinh");
    int n;
	printf("\nNhap lua chon: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("\nXin chao cac ban!");
            break;
        case 2:
        {
            float c,f;
            printf("\nNhap do C: ");
            scanf("%f", &c);
            f = c*1.8 +32;
            printf("\n%.1f do C bang %.1f do F",c,f);
        }
            break;
        case 3:
        {
            int r;
            float chuvi, dientich;
            float PI = 3.14;
            printf("\nNhap ban kinh r:");
            scanf("%d", &r);
            // tinh chu vi
            chuvi = 2*PI*r;
            // tinh dien tich
            dientich = PI*r*r;

            printf("\nChu vi hinh tron la: %.2f\n", chuvi);

            printf("\nDien tich hinh tron la: %.2f", dientich);
            
        }
            break;
        case 4:
        printf("\nKet thuc chuong trinh!");
            break;
    }
   
   
    return 0;
 

}