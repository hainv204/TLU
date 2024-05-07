#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[50];
	printf("Nhap xau: "); gets(s);
	printf("Xau ban dau: %s",s);
	printf("\nXau dao nguoc: %s",strrev(s));
return 0;
}

