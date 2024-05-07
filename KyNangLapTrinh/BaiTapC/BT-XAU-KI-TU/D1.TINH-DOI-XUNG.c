#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {

	char s[50];
	printf("Nhap xau ki tu: ");
	gets(s);
	int i,n=strlen(s);
	for(i=0; i<n/2; i++)
		if(s[i]!=s[n-i-1])
			break;
	if(i==n/2)
		printf("Xau doi xung!");
	else
		printf("Xau khong doi xung!");

	return 0;
}


