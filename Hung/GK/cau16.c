#include <stdio.h>
#include <math.h>

int main()
{
    int n;     //dau vao
    int Money; //dau vao

    printf("\nNhap so tien: ");
    scanf("%d", &Money);
    printf("\nNhap lua chon: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    {
        if (Money < 9000)
            printf("Ban khong du tien!");
        break;
        printf("Tra xanh C2 - ");
        int tiendu = Money % 9000;
        int tienconlai = Money - tiendu;
        int sochai = tienconlai / 9000;
        printf("%d chai - ", sochai);
        printf("Tien du: %d", tiendu);
    }
    case 2:
    {
        if (Money < 11000)
            printf("Ban khong du tien!");
        break;
        printf("Sting - ");
        int tiendu = Money % 11000;
        int tienconlai = Money - tiendu;
        int sochai = tienconlai / 11000;
        printf("%d chai - ", sochai);
        printf("Tien du: %d", tiendu);
    }
    case 3:
    {
        if (Money < 10000)
            printf("Ban khong du tien!");
        break;
        printf("Pepsi - ");
        int tiendu = Money % 10000;
        int tienconlai = Money - tiendu;
        int sochai = tienconlai / 10000;
        printf("%d chai - ", sochai);
        printf("Tien du: %d", tiendu);
    }
    case 4:
    {
        if (Money < 13000)
            printf("Ban khong du tien!");
        break;
        printf("Warrior - ");
        int tiendu = Money % 13000;
        int tienconlai = Money - tiendu;
        int sochai = tienconlai / 13000;
        printf("%d chai - ", sochai);
        printf("Tien du: %d", tiendu);
    }
    case 5:
    {
        if (Money < 5000)
            printf("Ban khong du tien!");
        break;
        printf("Nuoc suoi - ");
        int tiendu = Money % 5000;
        int tienconlai = Money - tiendu;
        int sochai = tienconlai / 5000;
        printf("%d chai - ", sochai);
        printf("Tiendu: %d", tiendu);
    }
    }
}