#include<stdio.h>
#include<math.h>
int main() {
	int n,i,a[1000],b,dem3=0,demcp=0;
	do {
		printf("N = ");
		scanf("%d",&n);
	} while(n<=0 || n>100);
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day so da nhap:");
	for(i=0; i<n; i++) {
		printf(" %d",a[i]);
	}
	printf("\nDay so nguoc lai:");
	for(i=n-1; i>=0; i--) {
		printf(" %d",a[i]);
	}

	for(i=0; i<n; i++) {
		if(a[i]%3==0)
			dem3++;
	}
	printf("\nCo %d so chia het cho 3",dem3);

	for(i=0; i<n; i++) {
		b=sqrt(a[i]);
		if(b*b==a[i])
		//	printf("\n%d",a[i]);
		demcp++;
	}
	printf("\nCo %d so chinh phuong",demcp);
	return 0;
}
