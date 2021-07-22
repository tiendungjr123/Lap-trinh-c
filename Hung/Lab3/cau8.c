#include <stdio.h>
#include <math.h>

int main(){
    
    float toan, ly, hoa, van, anh, su;
    float dtb;
    printf("\nNhap diem toan: ");
    scanf("%f",&toan);

    printf("\nNhap diem ly: ");
    scanf("%f",&ly);

    printf("\nNhap diem hoa: ");
    scanf("%f",&hoa);

    printf("\nNhap diem van: ");
    scanf("%f",&van);

    printf("\nNhap diem anh: ");
    scanf("%f",&anh);

    printf("\nNhap diem su: ");
    scanf("%f",&su);

    // tinh diem trung binh
    dtb = (toan+ly+hoa+van+anh+su)/6;
    
    // kiem tra hoc luc
    
    if(dtb>=8){
        if(toan>=6.5 && ly>=6.5 && hoa>=6.5 && van>=6.5 && anh>=6.5 && su>=6.5);
            printf("\nHoc sinh loai gioi");
    }
    else if(dtb>=7 && dtb < 8){
        if(toan>=5 && ly>=5 && hoa>=5 && van>=5 && anh>=5 && su>=5);
            printf("\nHoc sinh loai kha");
    }
    else if(dtb>=5 && dtb < 7){
        if(toan>= 3.5 && ly>=3.5 && hoa>=  3.5 && van>=3.5 && anh>=  3.5 && su>= 3.5);
            printf("\nHoc sinh loai trung binh");
    }
    else{
        printf("\nHoc sinh loai yeu");
    }
    return 0;
}