#include<stdio.h>
#include<string.h>
int main() {
	int n,i,a[1000],max,min,s=0;
	do {
		printf("Nhap n = ");
		scanf("%d",&n);
	} while(n<=0 || n>=100);
	for(i=0; i<n; i++) {
		printf("So thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	max=min=a[0];
	for(i=0; i<n; i++) {
		if(max<a[i]) {
			max=a[i];
		}
		if(min>a[i]) {
			min=a[i];
		}
		s+=a[i];

	}
	printf("So max = %d, so min = %d",max,min);
	printf("\nTrung binh cong day so: %g",(float)s/n);
	return 0;
}

