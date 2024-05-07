#include<stdio.h>
int main(){
    int n, i, j;
    do{
        printf("N = ");
    	scanf("%d", &n);
    }while(n<=0);
		printf("\nCac so chinh phuong:");
        for(i=1; i<=n; i++){
        	for(j=1; j<=i; j++){
                if(j*j==i)
                    printf(" %d", i);
        }
    }
}
