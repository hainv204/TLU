#include<stdio.h>
#include<math.h>
int main() {
	int n,i,b,a[1000],dem5=0,demcp=0;
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
	for(i=0;i<n;i++){
		b=sqrt(a[i]);
		if(a[i]%5==0){
		dem5++;
}
if(b*b==a[i]){
		demcp++;
	}
}
	printf("\nSo so chan chia het cho 5 trong day: %d",dem5);
	printf("\nCo %d so chinh phuong trong day",demcp);
	return 0;
	}