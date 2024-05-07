#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n,s=1,i;
	printf("N = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*i;
	}
	printf("Giai thua cua N: N!= %d",s);
	return 0;
}
