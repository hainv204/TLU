#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100],c;
	printf("Nhap xau: "); gets(s);
	int i,n=strlen(s);
	for(i=0;i<n/2;i++){
		c=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=c;
	}
	printf("Xau dao nguoc: %s",s);
return 0;
}