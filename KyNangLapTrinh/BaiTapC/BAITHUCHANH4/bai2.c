#include<stdio.h>
#include<math.h>
int main() {
	int n,i,j,max,maxcp,b,tam,a[1000];
	while(n<=0 || n>=100) {
		printf("N = ");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day so:");
	for(i=0; i<n; i++) {
		printf(" %d",a[i]);
	}
	max=a[0];
	for(i=0; i<n; i++){
		if(max<a[i])
			max=a[i];
	}
	printf("\nSo lon nhat cua day so: %d",max);
	for(i=0; i<n; i++) {
		b=sqrt(a[i]);
		if(b*b==a[i]) {
			maxcp=a[0];
			if(maxcp<a[i]) {
				maxcp=a[i];
			}
		}
	}
	printf("\nSo chinh phuong lon nhat: %d",maxcp);
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++)
			if(a[i]<a[j]) {
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	}
		printf("\nDay sau sap xep giam dan:");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	return 0;
}
