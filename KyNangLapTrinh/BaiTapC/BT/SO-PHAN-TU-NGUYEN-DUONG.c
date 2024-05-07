#include <stdio.h>
// ctrl + shitf + a de fomat lai code
// ctrl + e : cop
//ctrl + d : del
int main () {
	int n , A[100] , dem=0;
	printf("Nhap n =");
	scanf("%d",&n);
	if(n>0) {
		int i;
		for(i =0; i < n; i++) {
			printf("Nhap phan tu thu %d la:",i+1);
			scanf("%d",&A[i]);
			if(A[i]>0) {
				dem++;
			}
		}
		printf("So phan tu nguyen duong la :%d",dem);
	} else {
		printf("So lieu nhap vao khong hop le!");
	}
	return 0;
}

