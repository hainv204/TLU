#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n,s;
	do{
	printf("N = ");
	scanf("%d",&n);
	s=s+n;
	}while(n!=0);
		printf("Tong cac so nguyen = %d",s);
	return 0;
}
