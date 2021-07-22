#include<stdio.h>
//khai bao 1 cau truc
struct sinhvien //sinhvien la ten cua kieu cau truc trong bai
{
	char mssv[11];//bai toan yeu cau mssv la 10 ky tu
	char ten [21];
	char gioitinh [2];
	int ns;
	int diem;
};
void nhapsv (struct sinhvien a[], int n);//khai bao 1 ham nhap sinh vien
void xuatsv (struct sinhvien a[], int n);//khai bao 1 ham xuat sinh vien

int main()
{
	struct sinhvien a[100];//khai bao 1 bien a kieu struct sinhvien co toi da 100 phan tu
	//bien so sinh vien can nhap
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	nhapsv(a,n);
	xuatsv(a,n);
	return 0;
}	
//dinh nghia ham con
void nhapsv(struct sinhvien a[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Nhap mssv cua sinh vien thu %d: ",i+1);
        fflush(stdin);
		gets(a[i].mssv);
		printf("Nhap ten cua sinh vien thu %d: ",i+1);
        fflush(stdin);
		gets(a[i].ten);
		printf("Nhap diem cua sinh thu %d: ",i+1);
        fflush(stdin);
		scanf("%d",&a[i].diem);
	}
}

void xuatsv(struct sinhvien a[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\nMa so sinh vien thu %d: %s",i+1,a[i].mssv);
		printf("\nTen sinh vien thu %d: %s",i+1,a[i].ten);
		printf("\nDiem cua sinh vien thu %d: %d",i+1, a[i].diem);
	}
}
