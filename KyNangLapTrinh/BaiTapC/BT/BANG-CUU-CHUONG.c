#include<stdio.h>
int main() {
	int so,i;
	printf("ban muon nhap bang cuu chuong bao nhieu:");
	scanf("%d",&so);
	for(i=1; i<=10; i++) {
		printf("%d*%d=%d\n",so,i,so*i);
	}
	return 0;
}
