#include <stdio.h>
 
int main(){
    int n;
	int i;
    int S = 0;
	// câu a
    do{
        printf("\nNhap n = ");
        scanf("%d", &n);
		if(n<1 || n>7){
			printf("n ko hop le");
		}
    }while(n < 1 || n>7);
	// câu b

  switch(n%10)
		{
		case 2: printf("Thu Hai"); break;
		case 3: printf("Thu Ba"); break;
		case 4: printf("Thu Tu"); break;
		case 5: printf("Thu Nam"); break;
		case 6: printf("Thu Sau"); break;
		case 7: printf("Thu Bay"); break;

		}
	// câu c

	for(i = 1; i <= n; i++) {
		S = S+i;
	}
    printf("\nTong la %2d\n", S);
 }


 