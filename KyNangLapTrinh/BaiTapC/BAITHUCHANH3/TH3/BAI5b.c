#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n,s=1,i;
	printf("N = ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		s=s*(2*i+1);
	}
	printf("Giai thua le cua N: A = %d",s);
	return 0;
}
