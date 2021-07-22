#include <stdio.h>
#include <math.h>
#include <string.h>

// nhap phep toan
void PhepToan(char *op)
{

    scanf("%s", op);
    while (strcmpi(op, "") == 0)
        scanf("%s", op);
}

// cac ham tinh toan

// phep cong
int cong()
{
    int a, b;
    scanf("%d%d", &a, &b);
    return a + b;
}

// phep tru
int tru()
{
    int a, b;
    scanf("%d%d", &a, &b);
    return a - b;
}

// phep nhan
int nhan()
{
    int a, b;
    scanf("%d%d", &a, &b);
    return a * b;
}

// phep chia
float chia(int a, int b)
{
    return (float)a / b;
}

// phep chia lay du
int chiahet(int a, int b)
{
    int sodu;
    sodu = a - (a / b) * b;
    return sodu;
}

// trung binh cong
float Tbc()
{
    int Sum = 0, n, i = 0;
    while (scanf("%d", &n))
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            Sum += n;
            i++;
        }
    }
    return (float)Sum / i;
}
// tim min
int Min()
{
    int n, min, temp = 0;
    while (scanf("%d", &n))
    {
        if (n == -1)
        {
            // neu gap so -1 dung vong lap
            break;
        }
        else if (n != -1 && temp == 0)
        {
            // gan cho min la so n dau tien
            min = n;
            temp = 1;
        }

        if (n < min) // kiem tra cac so phia sau co nho hon min hien tai hay ko
            min = n;
    }
    return min;
}

// tim max
int Max()
{
    int n, max, temp = 0;
    while (scanf("%d", &n))
    {
        if (n == -1)
        {
            // neu gap so -1 dung vong lap
            break;
        }
        else if (n != -1 && temp == 0)
        {
            // gan cho min la so n dau tien
            max = n;
            temp = 1;
        }

        if (n > max) // kiem tra cac so phia sau co lon hon max hien tai hay ko
            max = n;
    }
    return max;
}

// kiem tra so nguyen to
int NT(int n)
{

    if (n == 1)
        return 0;

    int i;

    for (i = 2; i <= sqrt(n); i++)

        if (n % i == 0)
            return 0;
    return 1;
}

// tong cac so ngyen to

void Snt()
{
    int sum = 0, n;
    scanf("%d", &n);
    if (n <= 200)
    {
        int i;
        for (i = 0; i <= n; i++)
        {
            if (NT(i))
                sum += i;
        }
        printf("%d", sum);
    }
    else
        printf("so khong hop le");
}

// dem so chan
int Demchan()
{
    int n, count = 0;
    while (scanf("%d", &n))
    {
        if (n == -1)
            break;
        if (n % 2 == 0)
            count++;
    }
    return count;
}

// dem so le
int Demle()
{
    int n, count = 0;
    while (scanf("%d", &n))
    {
        if (n == -1)
            break;
        if (n % 2 != 0)
            count++;
    }
    return count;
}

// kiem tra tang dan

void KTTang()
{
    int n;
    scanf("%d", &n);
    int Check = 1;
    int arr = n;

    int index1 = arr % 10;
    arr /= 10;
    while (arr != 0)
    {

        int index2 = arr % 10;
        arr /= 10;

        if (index1 < index2)
        {
            Check = 0;
            break;
        }

        else
        {
            index1 = index2;
        }
    }

    if (Check)
        printf("So tang dan");

    else
        printf("Khong phai so tang dan");
}

// day so tang dan

void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
}



void SXTang()
{
    int n[1000], min, tmp;
    int i;
    while (scanf("%d", &n[i]))
    {
        if (n[i] == -1)
        {
            // neu gap so -1 dung vong lap
            break;
        }
        else{
            
           if(n[i+1]>n[i]){
               printf("ok");
           }
           else{
               printf("not");
           }
        }
        i++;
    }

    
}
// tinh trung binh tong chan
float TBChan()
{
    int sum = 0, n;
    int count = 0;
    while (scanf("%d", &n))
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            if (n % 2 == 0)
            {

                sum += n;
                count++;
            }
        }
    }
    return (float)sum / count;
}

// so le lon nhat

int MaxLe()
{
    int n, max, temp = 0;
    while (scanf("%d", &n))
    {
        if (n == 0)
        {
            // neu gap so 0 dung vong lap
            break;
        }
        else if (n % 2 != 0)
        {
            if (temp == 0)
            {

                // gan cho max la so n le dau tien
                max = n;
                temp = 1;
            }

            if (n > max) // kiem tra cac so phia sau co lon hon max hien tai hay ko
                max = n;
        }
    }
    return max;
}

// dem so nguyen to
int DemSNT()
{
    int n, count = 0;
    while (scanf("%d", &n))
    {
        if (n == 0)
            break;
        if (NT(n))
            count++;
    }
    return count;
}
// Ham main goi thuc thi cac ham tren

int main()
{
    char op[10];
    PhepToan(op);

    if (strcmpi(op, "+") == 0)
        printf("%d", cong());

    else if (strcmpi(op, "-") == 0)
        printf("%d", tru());

    else if (strcmpi(op, "*") == 0)
        printf("%d", nhan());

    else if (strcmpi(op, "/") == 0)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b == 0)
            printf("loi");
        else
            printf("%0.2f", chia(a, b));
    }
    else if (strcmpi(op, "%") == 0)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b == 0)
            printf("loi");
        else
            printf("%d", chiahet(a, b));
    }
    else if (strcmpi(op, "Tbc") == 0)
        printf("%0.2f", Tbc());
    else if (strcmpi(op, "Min") == 0)
        printf("%d", Min());
    else if (strcmpi(op, "Max") == 0)
        printf("%d", Max());
    else if (strcmpi(op, "Snt") == 0)
        Snt();
    else if (strcmpi(op, "Demchan") == 0)
        printf("%d", Demchan());
    else if (strcmpi(op, "Demle") == 0)
        printf("%d", Demle());
    else if (strcmpi(op, "KTTang") == 0)
        KTTang();
    else if (strcmpi(op, "SXTang") == 0)
        SXTang();
    else if (strcmpi(op, "TBChan") == 0)
        printf("%0.2f", TBChan());
    else if (strcmpi(op, "MaxLe") == 0)
        printf("%d", MaxLe());
    else if (strcmpi(op, "DemSNT") == 0)
        printf("%d", DemSNT());
    else
        printf("loi");
}
