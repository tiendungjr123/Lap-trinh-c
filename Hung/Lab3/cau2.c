#include <stdio.h>
#include <math.h>

int main(){

    float Gia,Tien,TongTien;
    int SoLuong;
    printf("\nNhap Gia: ");
    scanf("%f", &Gia);
    printf("\nNhap SoLuong: ");
    scanf("%d", &SoLuong);
    Tien = Gia*SoLuong;
    if(Tien>100){
        TongTien = Tien - Tien*0.03;
    }
    else{
        TongTien = Tien;
    }
    printf("TongTien: %0.2f\n",TongTien);
   
   

    return 0;
}