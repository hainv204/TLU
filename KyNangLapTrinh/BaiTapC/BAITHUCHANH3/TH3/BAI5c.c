#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n,s=1,i;
	printf("N = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*(2*i);
	}
	printf("Giai thua chan cua N: B = %d",s);
	return 0;
}
