#include<stdio.h>
#include<string.h>
int main() {
	int i,j;
	char s[5][20],tam[20];
	for(int i=0; i<5; i++) {
		printf("Ten sinh vien[%d]: ",i+1);
		gets(s[i]);
	}
	for(i=0; i<4; i++) {
		for(j=i+1; j<5; j++) {
		if(strcmp(s[i],s[j])>0){
			strcpy(tam,s[i]);
			strcpy(s[i],s[j]);
			strcpy(s[j],tam);
		}
	}
}
		printf("Ten sau sap xep la:");
		for(i=0; i<5; i++) {
			printf("\n%s",s[i]);
		}

		return 0;
	}
