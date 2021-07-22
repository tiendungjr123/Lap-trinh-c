#include <stdio.h>
#include <math.h>
void NhapMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("\nNhap phan tu arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int Nt(int n)

{

    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int i;

    for (i = 2; i <= sqrt(n); i++)

        if (n % i == 0)

            return 0;

    return 1;
}

// so nguyen to nho nhat trong mang

void FindNT(int arr[], int n)

{
    int min;
    int i;
    for (i = 0; i < n; i++)

    {

        if (Nt(arr[i]))

        {
            min = arr[i];
            if (arr[i] < min){

                min = arr[i];
            }
        }
    }

    printf("\nSo nguyen to nho nhat trong mang la: %d \n", min);
}

// tim vi tri cua x nhap trong mang
void vitri(int arr[], int n)
{

    int vt, x, i;
    printf("\nNhap x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
        if ((arr[i]) == x)
        {
            printf("\nVi tri cua x la: %d", i);
        }
}

// tim vi tri phan tu nho nhat trong mang
void vitrimin(int arr[], int n)
{
    int i;
    int min = arr[0];
    int vt;
    for (i = 0; i < n; i++)

    {
        if (arr[i] < min){
            min = arr[i];
            vt = i;
        }
    }
    printf("\nVi tri phan tu nho nhat trong mang la: %d",vt);
}

// dem phan tu duong trong mang
void dem(int a[], int n){
    int dem = 0;
    int i;
    for ( i = 0; i < n; i++){
        if(a[i]>0)
            dem++;
    }
    if(dem > 0)
        printf("\nSo phan tu duong trong mang la: %d\n ",dem);
    else
        printf("\nkhong co phan tu duong trong mang\n");
    
}

// dem so lan phan tu x xuat hien trong mang
void solan(int arr[], int n)
{

    int  x, i;
    int count = 0;
    printf("\nNhap x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++){

        if ((arr[i]) == x)
        {
            count++;
        }
    }
    printf("\nSo lan phan tu x xuat hien la: %d",count);
}

// dem so nguyen to trong mang
void demNT(int arr[], int n){
    int i;
    int count = 0;

    for (i = 0; i < n; i++){

        if (Nt(arr[i]))
        {
            count++;
        }
    }
    printf("\nSo nguyen to trong mang la: %d",count);
}

// xuat ra danh sach cac so o vi tri chan
void listChan(int arr[], int n){
    int i;

    for (i = 0; i < n; i++){

        if (i%2==0)
        {
            printf("\nPhan tu o vi tri chan la a[%d] = %d", i, arr[i]);
        }
    }
}

// vi tri phan tu chan dau tien

void vitrichan(int arr[], int n)
{
    int i;
    int vt;
    int dem = 0;
    for (i = 0; i < n; i++)

    {
        if(arr[i]%2 == 0){
            vt = i;
            dem++;
            break;
        }
        
    }
    if(dem != 0){
        printf("\nVi tri chan dau tien trong mang la: %d",vt);
    }
    else{
        printf("\n-1");
    }

}

// dao nguoc gia tri trong mang
void DaoMang(int arr[],int n)
{
    int i;
   for( i=0;i<n/2;i++)
    {
      int temp=arr[i];
         arr[i]=arr[n-1-i];
         arr[n-1-i]=temp; 
   }
   printf("\nMang bay gio la: ");
    for(i = 0; i<n; i++)
   {
      printf("%4d",arr[i]);
   }
}

// kiem tra tinh doi xung cua mang
int MangDoiXung(int arr[], int n)
{
    int i;
	for( i = 0; i < n/2; i++)
	{
		if(arr[i] != arr[n - i - 1])
		{
			return -1;
			break;
		}
	}
	return 1;
}

// tim phan tu xuat hien nhieu nhat trong mang

int xuathien(int arr[],int n)
{   
    int i;
	int max=0;
	int dem=1;
    int index;
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			dem++;
            if(dem>max)
            {
                max=dem;
			    index = arr[i];
            }	
		}
		else
		{
           dem=1;
		}
	}
	return index;

}

// kiem tra mang co phai la mang tang hay khong
void checkMang(int arr[], int n) {
    int dem = 0;
    int i;
    for ( i = 0; i < n-1; i++)
    {
        if (arr[i + 1] >= arr[i]) 
        dem++;
    }
    if (dem == n-1){
        printf("\nMang tang");
    }
    
    else {
        printf("\nMang khong tang");
    }
}

int main()
{
    int n;
    int arr[15];
    printf("\nNhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > 15)
        {
            printf("\nNhap lai so luong phan tu: ");
        }
    } while (n <= 0 || n > 15);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    FindNT(arr, n);
    vitri(arr, n);
    vitrimin(arr, n);
    dem(arr, n);
    solan(arr, n);
    demNT(arr, n);
    listChan(arr, n);
    vitrichan(arr, n);
    printf("\n%d",MangDoiXung(arr, n));
    printf("\nPhan tu xuat hien nhieu nhat trong mang la: %d",xuathien(arr,n));
    checkMang(arr, n);
    DaoMang(arr, n);
}