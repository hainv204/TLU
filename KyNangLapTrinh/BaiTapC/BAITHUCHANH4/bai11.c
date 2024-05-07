#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
	char s[1000], w[1000], *p;
	
	printf("Nhap s: "); gets(s);
	printf("Nhap w: "); gets(w);
	
	int cntChuCai = 0, nS = strlen(s), nW = strlen(w), i, j = 0, check = 0, soTu = 0;
	
	for(i = 0; i < nS; i++) {
		if(isalpha(s[i])) cntChuCai++;
	}
	
	s[nS++] = ' ';
	for(i = 0; i < nS; i++) {
		if(s[i] == ' ' && !check) {
			soTu++;
			check = 1;		
	
		}
		else if(s[i] != ' ') {
			check = 0;	
		}
	}
	p = strstr(s, w);
	if(p) {
		printf("Xau w co xuat hien trong s\n");
	}else
		printf("Xau w khong xuat hien trong s\n");
	printf("xau s co %d tu\n", soTu);
}