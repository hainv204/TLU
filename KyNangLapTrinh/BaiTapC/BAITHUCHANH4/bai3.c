#include<stdio.h>
#include<math.h>
int main() {
	int n,i,j,max,min,a[1000],dem=0;
	float tbc=0;
	do {
		printf("N = ");
		scanf("%d",&n);
	} while(n<=0 || n>=100);
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day so vua nhap:");
	for(i=0; i<n; i++) {
		printf(" %d",a[i]);
	}
	max=min=a[0];
	for(i=0; i<n; i++) {
		if(max<a[i]) {
			max=a[i];
		}
		if(min>a[i]) {
			min=a[i];
		}
		tbc+=a[i];
	}
	printf("\nSo lon nhat day so: %d",max);
	printf("\nSo nho nhat day so: %d",min);
	for(i=0; i<n; i++) {
		int kiemtra= 0;
		for(j = 2; j <= sqrt(a[i]); j++) {
			if(a[i] % j == 0) {
				kiemtra= 1;
				break;
			}
		}
		if(!kiemtra)
			dem++;
	}
	printf("\nSo luong so nguyen to trong day la: %d",dem);
	printf("\nTrung binh cong cac so trong day: %g",tbc/n);
	return 0;
}
