#include<stdio.h>
int main() {
	int n,a[1000],max,demmax=0;
	printf("N = ");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(int i=0; i<n; i++) {
		if(max < a[i])
			max=a[i];
	}
	for(int i=0; i<n; i++) {

		if(max == a[i])demmax++;

	}
	printf("Gia tri lon nhat cua A: %d",max);
	printf("\nSo phan tu co gia tri lon nhat: %d\n",demmax);
	return 0;
}
