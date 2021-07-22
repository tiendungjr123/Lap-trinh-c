#include <stdio.h>

int main(){
    
    char c;
    int n;
	printf("\nNhap ky tu c: ");
	scanf("%c", &c);

    if(c>='A' && c<='Z'){
        n=1;
    }
    else if(c>='a' && c<='z'){
        n=2;
    }
    else if(c>='0' && c<='9'){
        n=3;
    }
    else{
        n=4;
    }

    switch(n){
        case 1:
            printf("\nDay la ky tu Hoa");
            break;
        case 2:
            printf("\nDay la ky tu thuong");
            break;
        case 3:
            printf("\nDay la ky tu so");
            break;
        case 4:
            printf("\nDay la cac ky tu khac");
            break;
    }
    return 0;

}