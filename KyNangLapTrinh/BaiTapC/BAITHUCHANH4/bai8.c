#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char s[1000];
	printf("Nhap s: "); gets(s);
	int n = strlen(s), i, cntHoa = 0, check = 0, soTu = 0;
	for(i = 0; i < n; i++) {
		if(isupper(s[i])) cntHoa++;
		
	}
	printf("Xau s co %d ky tu in hoa\n", cntHoa);
	printf("Xau s dao nguoc la: ");
	for(i = n - 1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	
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
	printf("\nXau s co %d tu\n", soTu);
}