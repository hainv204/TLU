#include<stdio.h>
int main() {
	int n;
	float min,a[1000];
	printf("N = ");
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%g",&a[i]);
	}
	min=a[0];
	for(int i=0; i<n; i++) {
		if(min>a[i]) {
			min=a[i];
		}
	}
	printf("Gia tri nho nhat trong A: %g",min);
	return 0;
}