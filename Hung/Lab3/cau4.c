#include <stdio.h>

int main(){
  
    int giobatdau, gioketthuc, dongia;

    printf("\nNhap gio bat dau: ");
    scanf("%d",&giobatdau);
    printf("\nNhap gio ket thuc: ");
    scanf("%d",&gioketthuc);

    if(giobatdau>=10 && gioketthuc<=17){
        dongia = (gioketthuc-giobatdau)*20000 ;
    }
    else  if(giobatdau>17 && gioketthuc<=24){
        dongia = (gioketthuc-giobatdau)*45000 ;
    }
    else {
        printf("\nGio nghi");
    }

    printf("\nDon gia la: %d",dongia);
    return 0;


 
}
