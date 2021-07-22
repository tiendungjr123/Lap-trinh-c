#include <stdio.h>
 
int main(){
    int n;
	int i;
    int S = 0;
	// câu a
    do{
        printf("\nNhap n = ");
        scanf("%d", &n);
		if(n<0 || n>=10){
			printf("n ko hop le");
		}
    }while(n < 0 || n>=10);
	// câu b

  switch(n%10)
		{
		case 1: printf("Mot"); break;
		case 2: printf("Hai"); break;
		case 3: printf("Ba"); break;
		case 4: printf("Bon"); break;
		case 5: printf("Lam"); break;
		case 6: printf("Sau"); break;
		case 7: printf("Bay"); break;
		case 8: printf("Tam"); break;
		case 9: printf("Chin"); break;
		}
	// câu c

	for(i = 1; i <= n; i++) {
		S = S+(-1)^i;
	}
    printf("\nTong la %2d\n", S);
 }


 