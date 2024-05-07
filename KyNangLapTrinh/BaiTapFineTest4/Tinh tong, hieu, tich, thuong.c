#include <stdio.h>
#include <conio.h>

	int x,y;

int main(){
	
	printf("A="); scanf("%d",&x);
	printf("B="); scanf("%d",&y);
	printf("A+B=%d\n", x+y);
	printf("A-B=%d\n", x-y);
	printf("AxB=%d\n", x*y);
	printf("A:B=%d\n",x/y);
	printf("A%%B=%d\n",x%y);
	return 0;
}
