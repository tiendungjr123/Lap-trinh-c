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

// day so tang dan

void SXTang()
{
    int n, min, temp;
    while (scanf("%d", n))
    {
        if (n == -1)
        {
            // neu gap so -1 dung vong lap
            break;
        }
        
        

        
    }
    printf("%d", n);
    
}

int main(){
    char op[10];
    PhepToan(op);
    if (strcmpi(op, "SXTang") == 0)
        SXTang();
}