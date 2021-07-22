#include <stdio.h>

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}
float tinhtb(int a[], int n){
    float tb, tong=0;
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            tong=tong+a[i];
            dem++;
        }
    }
     
    if(dem==0)
        {
        printf("\nKhong co phan tu duong trong mang\n");
        return 0;
        }
    else
        {
            tb=tong/dem;
            return tb;
        }
}

int KiemTraSHT(int x)
{
	int i, tong=0;
    int check = 1;
	for(i=1; i<x; i++){
		if(x%i==0)
			tong = tong + i;
    }
	if(tong!=x)
		return 0;
	return check;
}
void SoHT(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(KiemTraSHT(a[i])==1)
			printf("\nPhan tu a[%d] = %d", i, a[i]);
	}
		
}
int main(){
    int n;
    int arr[15];
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 15){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > 15);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    printf("\nGia tri trung binh la: %0.2f",tinhtb(arr,n));  
    printf("\n======SO HOAN THIEN=====\n");
    SoHT(arr,n);
}