#include <stdio.h>
#include <math.h>

int main()
{
    int Money;      // dau vao
    float SumMoney; // dau ra

    do
    {
        printf("\nNhap so tien ban duoc trong thang: ");
        scanf("%d", &Money);
    } while (Money < 0);

    if (Money > 0 && Money <= 50000000)
    {
        SumMoney = Money;
    }

    else if (Money > 51000000 && Money <= 100000000)
    {
        SumMoney = Money + Money * 0.03;
    }

    else if (Money > 101000000 && Money <= 200000000)
    {
        SumMoney = Money + Money * 0.05;
    }

    else if (Money > 201000000 && Money <= 400000000)
    {
        SumMoney = Money + Money * 0.07;
    }

    else
    {
        SumMoney = Money + Money * 0.09;
    }

    printf("\nTong so tien nhan duoc la: %f", SumMoney);
}