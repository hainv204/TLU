#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char s[1000], c;
	
	printf("Nhap s: "); gets(s);
	printf("Nhap c: "); scanf("%c", &c);
	
	int n = strlen(s), i, cntC = 0, check = 0, soTu = 0;
	
	for(i = 0; i < n; i++) {
		if(s[i] == c) cntC++;
		s[i] = toupper(s[i]);
	}
	
	printf("So lan xuat hien ky tu %c trong s la: %d\n", c, cntC);
	printf("Xau s viet hoa la: %s\n", s);
	
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
	printf("Xau s co %d tu.", soTu);
	
}