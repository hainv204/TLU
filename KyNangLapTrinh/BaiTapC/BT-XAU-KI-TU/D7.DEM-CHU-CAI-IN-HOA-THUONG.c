#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[1000];
int main() {
	printf("Xau S: ");
	gets(s);
	int i,d=0;
	for(i=0; s[i]!='\0'; i++) {
		if(isupper(s[i])!=0)
			d++;
	}
	printf("So chu cai in hoa: %d",d);
	return 0;
}

