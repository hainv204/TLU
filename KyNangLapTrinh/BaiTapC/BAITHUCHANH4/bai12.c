#include<stdio.h>
#include<string.h>
int main() {
	char s[1000], temp[1000], c;
	printf("Nhap s: "); gets(s);
	printf("Nhap ky tu c: "); scanf("%c", &c);
	
	int n = strlen(s), i, cntC = 0, check = 0, soTu = 0, j = 0;
	
	for(i = 0; i < n; i++) {
		if(s[i] == c) cntC++;
		if(isupper(s[i])) s[i] = tolower(s[i]);
	}
	s[n++] = ' ';
	for(i = 0; i < n; i++) {
		if(s[i] == ' ' && strlen(temp)) {
			if(!check) {
				soTu++;
				check = 1;		
			}
	
		}
		else if(s[i] != ' ') {
			temp[j++] = s[i];
			check = 0;	
		}
	}
	
	printf("Xau sau khi chua hoa la: %s\n", s);
	printf("Ky tu %c xuat hien %d la trong: %s\n", c, cntC, s);
	printf("%s co %d tu.", s, soTu);
}