#include<stdio.h>
#include<string.h>
int main(){
	char s[1000], w[1000];
	printf("Nhap xau S: "); gets(s);
	printf("Nhap xau W: "); gets(w);
	
	char *vt = strstr(s, w);
	
	if(vt != NULL)
		printf("W xuat hien trong S o vi tri %d\n",vt - &s[0]);
	else
		printf("W khong xuat hien trong S\n");
	return 0 ;
}




