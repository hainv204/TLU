#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char chuoi[50],chuoicon[50],*p;
	int d=0;
	printf("Nhap chuoi: "); gets(chuoi);
	printf("Nhap chuoi con: ");
	gets(chuoicon);
	p=strstr(chuoi,chuoicon);
	while(p!=NULL){
		d=d+1;
		p=strstr(p+1,chuoicon);
	}
	printf("Xau \"%s\" xuat hien trong xau \"%s\" %d lan",chuoicon,chuoi,d);
return 0;
}

