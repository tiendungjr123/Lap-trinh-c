#include <stdio.h>
#include <math.h>
#include <string.h>

// nhap phep toan
void PhepToan(char *op)
{

	scanf("%s",op);
	while(strcmpi(op,"")==0)
		scanf("%s",op);
}

// cac ham tinh toan

// phep cong
int cong() {
	int a, b;
	scanf("%d%d",&a,&b);
	return a+b;
}

// phep tru
int tru() {
	int a, b;
	scanf("%d%d",&a,&b);
	return a-b;
}

// phep nhan
int nhan() {
	int a, b;
	scanf("%d%d",&a,&b);
	return a*b;
}

// phep chia
float chia(int a, int b) {
	return (float)a/b;
}

// phep chia lay du
int chiahet(int a, int b){
    int sodu;
    sodu = a-(a/b)*b;
    return sodu;
}

// tinh trung binh cong


float average() {
	int Sum=0, n, i=0;
	while(scanf("%d",&n))
	{
		if(n==0){
			break;
        }
		else
		{
			Sum+=n;
			i++;
		}
	}
	return (float) Sum/i;
}

// tim min
int Min()
{
	int n, min, temp = 0;
	while(scanf("%d",&n))
	{
		if (n==0) {
			// neu gap so 0 dung vong lap
			break;
		}
		else if (n!=0 && temp==0)
		{
			// gan cho min la so n dau tien
			min = n; 
			temp = 1;
		}
			
		if (n<min) // kiem tra cac so phia sau co nho hon min hien tai hay ko
			min = n;
	}
	return min;
}

// tim max
int Max()
{
	int n, max, temp = 0;
	while(scanf("%d",&n))
	{
		if (n==0) {
			// neu gap so 0 dung vong lap
			break;
		}
		else if (n!=0 && temp==0)
		{
			// gan cho min la so n dau tien
			max = n; 
			temp = 1;
		}
			
		if (n>max) // kiem tra cac so phia sau co lon hon max hien tai hay ko
			max = n;
	}
	return max;
}

// tinh tong
void Sum() {
	int sum=0, n;
	scanf("%d", &n);
	if(n<500)
    {
    	int i;
	    for(i=0; i<=n; i++)
	    {
	    	if (i%2==0)
	        	sum+=i;
	    }
    	printf("%d",sum);
	}
	else
		printf("loi nhap");
}

// kiem tra so nguyen to
int NT(int n){
    
    if(n == 1) return 0;

    int i;

    for(i=2;i<=sqrt(n);i++)

        if(n%i == 0)
            return 0;
        return 1;

}

// dem so nguyen to
int Count() {
	int n, count = 0;
	while(scanf("%d",&n))
	{
		if (n==0)
			break;
        if(NT(n))
            count++;

	}
	return count;
}

// chuyen thap phan sang nhi phan
long dec2bin(){
    int a;
	scanf("%d",&a);
    long b = 0;
    int p = 0;
    while (a > 0)
    {
        b+= (a % 2) * pow(10, p);
        ++p;
        a /= 2;
    }
    return b;
}

// Ham main goi thuc thi cac ham tren
int main()
{
	char op[10];
    PhepToan(op);

	if(strcmpi(op,"+")==0)
		printf("%d", cong());

	else if(strcmpi(op,"-")==0)
		printf("%d", tru());

	else if(strcmpi(op,"*")==0)
		printf("%d", nhan());		

	else if(strcmpi(op,"/")==0)
	{
		int a, b;
		scanf("%d%d",&a,&b);
		if (b==0)
			printf("loi");
		else
			printf("%f", chia(a, b));
	}
    else if(strcmpi(op,"%")==0)
	{
		int a, b;
		scanf("%d%d",&a,&b);
		if (b==0)
			printf("loi");
		else
			printf("%d", chiahet(a, b));
	}

	else if (strcmpi(op,"avg")==0)
		printf("%f",average());
    
	else if (strcmpi(op,"min")==0)
		printf("%d", Min());

    else if (strcmpi(op,"max")==0)
		printf("%d", Max());

	else if (strcmpi(op,"sum")==0)
		Sum();

	else if (strcmpi(op,"count")==0)
		printf("%d", Count());

	else if (strcmpi(op,"dec2bin")==0)
	{		
		printf("%d", dec2bin());
	}

	else
		printf("loi");
}
