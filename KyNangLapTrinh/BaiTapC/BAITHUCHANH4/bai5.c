#include<stdio.h>
#include<math.h>
int main() {
	int n,i,a[1000],b,maxcp,check;
	do {
		printf("N = ");
		scanf("%d",&n);
	} while(n<=0 || n>=100);
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
	maxcp=0;
	for(i=0; i<n; i++) {
		b=sqrt(a[i]);
		if(b*b==a[i])
			if(maxcp<a[i]) {
				maxcp=a[i];
				check=1;
			}
	}
	if(check==1)
		printf("\nSo chinh phuong lon nhat trong day: %d",maxcp);
	else
		printf("\nDay khong co so chinh phuong!");
	return 0;


}