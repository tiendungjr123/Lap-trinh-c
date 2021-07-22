#include<stdio.h>
//ham tra ve chi so phan tu bi trung, neu ko tra ve -1
int kt(int A[],int i,int pt);
int main()
{
    int A[100],n=0,i,pt;
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
    for(i=0;i<n;)
    {
        printf("A[%d]=",i);
        scanf("%d",&pt);
        if(kt(A,i,pt)==-1)
        {
            A[i]=pt;
            i++;
        }
        else
        printf("Trung voi A[%d],moi nhap lai :\n",kt(A,i,pt));
    }
    printf("Mang da nhap la:\n");
    for(i=0;i<n;i++)
        printf("%-3d",A[i]);
    printf("\n");
    return 0;
    
}
int kt(int A[],int i,int pt)
{
    int j;
    for( j=0;j<i;j++)
        if(A[j]==pt) return j;
    return -1;
} 