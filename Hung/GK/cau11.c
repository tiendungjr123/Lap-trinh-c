#include <stdio.h>
#include <math.h>

int main()
{
    int sogio; // dau vao
    int Money;

    printf("\nNhap so gio: ");
    scanf("%d", &sogio);

    if (sogio > 0 && sogio <= 2)
    {
        Money = 20000;
    }
    else if (sogio > 2 && sogio <= 10)
    {
        Money = 20000 + (sogio - 2) * 15000;
    }
    else if (sogio > 11 && sogio <= 23)
    {
        Money = 20000 + (10 - 2) * 15000 + (sogio - 10) * 10000;
    }
    else
    {

        int giodu = sogio % 24;
        int gioconlai = sogio / 24;

        if (sogio % 24 == 0)
        {
            Money = (sogio / 24) * 200000;
        }

        else if ((giodu) > 0 && (giodu) <= 2)
        {
            Money = gioconlai * 200000 + 20000;
        }
        else if ((giodu) > 2 && (giodu) <= 10)
        {
            Money = gioconlai * 200000 + 20000 + ((giodu)-2) * 15000;
        }
        else if ((giodu) > 11 && (giodu) <= 23)
        {
            Money = gioconlai * 200000 + 20000 + (10 - 2) * 15000 + ((giodu)-10) * 10000;
        }
    }

    printf("\nTien gui = %d", Money);
}