#include<stdio.h>
#include<math.h>
int main() {
	int n,i;
	float s=0;
	printf("N = ");
	scanf("%d",&n);
	for(i=n; i>0; i--) {
		s=sqrt(i+s);
	}
	printf("F(n) = %g",s);
	return 0;
}
