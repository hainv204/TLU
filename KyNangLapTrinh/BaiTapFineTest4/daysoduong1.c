#include<stdio.h>
int main() {
	int n,i=0;
	for(;;) {
		printf("Hay nhap mot so duong: ");
		scanf("%d",&n);

		if(n > 0) {
			i++;
		} else {
			printf("Ban da nhap %d so nguyen duong!",i);
			break;
		}

	}
	return 0;
}
