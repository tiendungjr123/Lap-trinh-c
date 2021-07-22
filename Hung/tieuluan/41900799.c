#include <stdio.h>
#include <string.h>
struct NhanVien
{
    int MaNV;
    char HoLotNV[20];
    char TenNV[10];
    float LuongNV;
};

void nhapNV(struct NhanVien a[], int n);
void ghiFile(struct NhanVien a[], int n, char fileName[]);
void xuatNV(struct NhanVien a[], int n);
void thongtinNV(struct NhanVien a[], int n, int MaNV);
float LonNhat(struct NhanVien a[], int n);
float NhoNhat(struct NhanVien a[], int n);
void FindLuongNV(struct NhanVien a[], int n);
void sapXepTheoTen(struct NhanVien a[], int n);
void xuatFile(struct NhanVien a[], int n, char fileNameOut[]);

int main()
{
    struct NhanVien nv[50];
    char fileName[] = "input10.txt";
    int n;
    int i;
    int MaNV;

    printf("\nNhap so luong NV: ");
    fflush(stdin);
    scanf("%d", &n);
    nhapNV(nv, n); 
    printf("\nDanh sach nhan vien:\n");
    ghiFile(nv,n,fileName);
    xuatNV(nv, n);
    printf("\nNhap MaNV: ");
    fflush(stdin);
    scanf("%d", &MaNV);
    printf("\nNhan vien tim kiem theo MaNV:\n");
    thongtinNV(nv,n,MaNV);
    printf("\nThong tin ho ten nhan vien co luong cao nhat va thap nhat:\n");
    FindLuongNV(nv,n);
    printf("\nDanh sach nhan vien sau khi sap xep theo ten a-z:\n");
    sapXepTheoTen(nv,n);
	xuatNV(nv,n);
    return 0;
}

// nhap thong tin nhan vien
void nhapNV(struct NhanVien a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nMaNV: ");
        fflush(stdin);
        scanf("%d", &a[i].MaNV);
        printf("\nNhap ho lot: ");
        fflush(stdin);
        gets(a[i].HoLotNV);
        printf("\nNhap ten nhan vien: ");
        fflush(stdin);
        gets(a[i].TenNV);
        printf("\nNhap Luong: ");
        fflush(stdin);
        scanf("%f", &a[i].LuongNV);
    }
}

void ghiFile(struct NhanVien a[], int n, char fileName[])
{
    int i;
    FILE *fp;
    fp = fopen(fileName, "a");
    for (i = 0; i < n; i++)
    {
        fprintf(fp,"%-10d %-20s %-10s %-10f\n", a[i].MaNV, a[i].HoLotNV, a[i].TenNV, a[i].LuongNV);
    }
    fclose(fp);
}

// xuat thong tin nhan vien
void xuatNV(struct NhanVien a[], int n)
{
    char fileNameOut[] = "output10.txt";
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-10s %-10f\n", a[i].MaNV, a[i].HoLotNV, a[i].TenNV, a[i].LuongNV);
    }
}

// tim thong tin nhan vien theo MaNV
void thongtinNV(struct NhanVien a[], int n, int MaNV)
{
    int i;
    char fileNameOut[] = "output10.txt";
    for (i = 0; i < n; i++)
    {
        if (a[i].MaNV == MaNV)
        {
            printf("%-10d %-20s %-10s %-10f\n", a[i].MaNV, a[i].HoLotNV, a[i].TenNV, a[i].LuongNV);
        }
    }
    FILE *fp;
    fp = fopen(fileNameOut, "a");
    for (i = 0; i < n; i++)
    {
        if (a[i].MaNV == MaNV){
        fprintf(fp,"%-10d %-20s %-10s %-10f\n", a[i].MaNV, a[i].HoLotNV, a[i].TenNV, a[i].LuongNV);
        }
    }
    fclose(fp);
}

// tim thong tin nhan vien co luong lon nhat va thap nhat
// lon nhat
float LonNhat(struct NhanVien a[], int n) 
{   
    int i;
	float max = a[0].LuongNV;
	for( i=1; i<n; i++)		
		if(a[i].LuongNV > max)
			max = a[i].LuongNV;
	return max;
}

// nho nhat
float NhoNhat(struct NhanVien a[], int n) 
{
    int i;
	float min = a[0].LuongNV;
	for(i=1; i<n; i++)		
		if(a[i].LuongNV < min)
			min = a[i].LuongNV;
    return min;
}

void FindLuongNV(struct NhanVien a[], int n){
    int i;
    char fileNameOut[] = "output10.txt";
    float max = LonNhat(a,n);
    float min = NhoNhat(a,n);
	for(i=0; i<n; i++){
        if(max == a[i].LuongNV) {
			printf("%-20s %-10s\n",a[i].HoLotNV, a[i].TenNV);
		}
        if(min == a[i].LuongNV) {
			printf("%-20s %-10s\n",a[i].HoLotNV, a[i].TenNV);
		}
    }
    FILE *fp;
    fp = fopen(fileNameOut, "a");
    for (i = 0; i < n; i++)
    {
        if(max == a[i].LuongNV) {
			fprintf(fp,"%-20s %-10s\n",a[i].HoLotNV, a[i].TenNV);
		}
        if(min == a[i].LuongNV) {
			fprintf(fp,"%-20s %-10s\n",a[i].HoLotNV, a[i].TenNV);
		}
    }
    fclose(fp);		
		
    
}

// sap xep nhan vien theo ten
void sapXepTheoTen(struct NhanVien a[], int n) {
	int i, j;
    char fileNameOut[] = "output10.txt";
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j --) {
			if(strcmp(a[j].TenNV, a[j-1].TenNV) < 0) {
				struct NhanVien sv = a[j];
				a[j] = a[j - 1];
				a[j - 1] = sv;
			}
		}
	}
    FILE *fp;
    fp = fopen(fileNameOut, "a");
    for (i = 0; i < n; i++)
    { 
        fprintf(fp,"%-10d %-20s %-10s %-10f\n", a[i].MaNV, a[i].HoLotNV, a[i].TenNV, a[i].LuongNV);
    }
    fclose(fp);
}
