#include <stdio.h>
 
int main(){
    int n;
	int i;
	// câu a
    do{
        printf("\nNhap n = ");
        scanf("%d", &n);
		if(n<9 || n>99){
			printf("n ko hop le");
		}
    }while(n < 9 || n>99);
	// c
		{
	switch(n/10)
		case 1: printf("Muoi "); break;
		case 2: printf("Hai Muoi "); break;
		case 3: printf("Ba Muoi "); break;
		case 4: printf("Bon Muoi "); break;
		case 5: printf("Nam Muoi "); break;
		case 6: printf("Sau Muoi "); break;
		case 7: printf("Bay Muoi "); break;
		case 8: printf("Tam Muoi "); break;
		case 9: printf("Chin Muoi "); break;   
		}
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

	printf("\nIn cac so chan:\n");
	for(i = 1; i <= n; i++) {
		if(i%2 == 0 && i%3 !=0)
			printf(" %2d\n", i);
	}
 	return 0;
 }


 
