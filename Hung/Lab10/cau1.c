#include <stdio.h>
#include <string.h>
struct NhanVien
{
    char MaNV[10];
    char HoTenNV[50];
    char GioiTinh[2];
    int NamSinh;
};

void nhapNV(struct NhanVien a[], int n);
void xuatNV(struct NhanVien a[], int n);
void DemNV(struct NhanVien a[], int n);
void sapXepTheoNamSinh(struct NhanVien a[], int n);
int main()
{
    struct NhanVien nv[50];
    int n;
    printf("\nNhap so luong NV: ");
    fflush(stdin);
    scanf("%d", &n);
    nhapNV(nv, n); 
    printf("\nDanh sach nhan vien:\n");
    xuatNV(nv, n);
    DemNV(nv,n);
    printf("\nNhan vien sap xep theo thu tu nam sinh tang dan:\n");
    sapXepTheoNamSinh(nv,n);
}
// nhap thong tin nhan vien
void nhapNV(struct NhanVien a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNhap MaNV cua nhan vien thu %d: ",i+1);
        fflush(stdin);
        gets(a[i].MaNV);
        printf("\nNhap ho ten cua nhan vien thu %d: ",i+1);
        fflush(stdin);
        gets(a[i].HoTenNV);
        printf("\nNhap gioi tinh cua nhan vien thu %d: ",i+1);
        fflush(stdin);
        gets(a[i].GioiTinh);
        printf("\nNhap nam sinh cuar nhan vien thu %d: ",i+1);
        fflush(stdin);
        scanf("%d", &a[i].NamSinh);
    }
}

// xuat thong tin nhan vien
void xuatNV(struct NhanVien a[], int n)
{
    char fileNameOut[] = "output10.txt";
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%-10s %-20s %-10s %-10d\n", a[i].MaNV, a[i].HoTenNV, a[i].GioiTinh, a[i].NamSinh);
    }
}

// dem so nhan vien co nam sinh 1985
void DemNV(struct NhanVien a[], int n){
    int i;
    int tmp = 1985;
    int count = 0;
    for (i = 0; i < n; i++){
        if(a[i].NamSinh == tmp){
            count++;
        }
    }
    if(count == 0){
        printf("\nKhong co nhan vien nao sinh nam sinh 1985");
    }
    else
        printf("\nSo Nhan vien sinh nam 1985 la: %d", count);
}

// sap xep theo nam sinh tang dan
void sapXepTheoNamSinh(struct NhanVien a[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j --) {
			if(a[j].NamSinh > a[j - 1].NamSinh) {
				struct NhanVien nv = a[j];
				a[j] = a[j - 1];
				a[j - 1] = nv;
			}
		}
	}
     for (i = 0; i < n; i++)
    {
        printf("%-10s %-20s %-10s %-10d\n", a[i].MaNV, a[i].HoTenNV, a[i].GioiTinh, a[i].NamSinh);
    }
}