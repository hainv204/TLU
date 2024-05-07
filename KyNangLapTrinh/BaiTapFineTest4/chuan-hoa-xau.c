#include <stdio.h>
#include <string.h>
// dau,giua xau k the xoa space bang '\0' vi day la xau rong hoac ket thuc mot xau
int main() {
	char W[50];
	int i;
	printf("Nhap W = ");
	gets(W);
// XOA SPACE O CUOI XAU
	while(W[strlen(W)-1]==' ')
		W[strlen(W)-1] ='\0';
// XOA SPACE O DAU XAU
	while(W[0]==' ')
		strcpy(&W[0], &W[1]);
//XOA SPACE O GIUA XAU
	for(i=0; i<strlen(W); i++) {
		if( W[i] == ' ' && W[i+1] == ' ') {
			strcpy(&W[i], &W[i+1]);
			i--;
		}
	}
	printf("Chuan hoa = %s",W);
	return 0;
}
