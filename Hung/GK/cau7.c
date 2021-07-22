#include <stdio.h>
#include <math.h>

int main()
{
    int Money; // dau vao
    printf("\nNhap so tien: ");
    scanf("%d", &Money);

    if (Money % 10000 != 0)
    {
        printf("\nNhap du lieu sai");
    }
    else
    {
        int namtram = Money / 500000;
        printf("%d to 500000, ", namtram);
        int tienconlai = Money - namtram * 500000;

        int haitram = tienconlai / 200000;
        printf("%d to 200000, ", haitram);
        tienconlai = tienconlai - haitram * 200000;

        int mottram = tienconlai / 100000;
        printf("%d to 100000,", mottram);
        tienconlai = tienconlai - mottram * 100000;

        int namchuc = tienconlai / 50000;
        printf("%d to 50000,", namchuc);
        tienconlai = tienconlai - namchuc * 50000;

        int haichuc = tienconlai / 20000;
        printf("%d to 20000,", haichuc);
        tienconlai = tienconlai - haichuc * 20000;

        int muoingan = tienconlai / 10000;
        printf("%d to 10000,", muoingan);
        tienconlai = tienconlai - muoingan * 10000;
    }
}