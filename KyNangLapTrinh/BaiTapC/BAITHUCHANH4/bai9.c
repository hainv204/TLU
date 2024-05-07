#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char s[1000], w[1000], *p;
	
	printf("Nhap s: "); gets(s);
	printf("Nhap w: "); gets(w);
	
	int n = strlen(s), i, cntSo = 0, check = 0, soTu = 0;
	for(i = 0; i < n; i++) {
		if(isdigit(s[i])) cntSo++;
	}
	printf("Xau s co %d ky tu la chu so\n", cntSo);
	s[n++] = ' ';
	for(i = 0; i < n; i++) {
		if(s[i] == ' ' && !check) {
			soTu++;
			check = 1;		
	
		}
		else if(s[i] != ' ') {
			check = 0;	
		}
	}
	printf("Xau s co %d tu\n", soTu);
	
	p = strstr(s, w);
	if(p) {
		printf("Xau w co xuat hien trong s\n");
	}else
		printf("Xau w khong xuat hien trong s\n");
}