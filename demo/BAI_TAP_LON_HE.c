#include <stdio.h>
#include <math.h>
#include <string.h>

void NhapPhepToan(char *pt)
{
	scanf("%s",pt);
	while(strcmpi("%s",pt)==0)
		scanf("%s",pt);
}

float Cong(float a, float b)
{
	float TONG;
	TONG = a + b;
	return TONG;
}

float Tru(float a, float b)
{
	float c;
	c = a - b;
	return c;
}

float Nhan(float a,float b)
{
	float c;
	c = a * b;
	return c;
}

void Chia(float a,float b)
{
	float c;
	c = a / b;
	if (b==0)
	{
		printf("loi");
	}
	else 
	{
		printf("%f",c);
	}
}

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
    
	else
		printf("loi");
}