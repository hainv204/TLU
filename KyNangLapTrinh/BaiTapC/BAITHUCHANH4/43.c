#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[1000], w[1000], *p;
	printf("Xau S:"); gets(s);
	
	int soTU = 0, n = strlen(s), i, check = 0;
	
	s[n++] = ' ';
	for(i = 0; i < n; i++) {
		if(s[i] == ' ' && check == 0) {
			soTU++;
			check = 1;
		}
		else if(s[i] != ' ') {
			check = 0;
			
		}
		
	}
	s[n--] = ' ';
	printf("Xau S co %d tu\n", soTU);	
	printf("Tu W:"); gets(w);
	p = strstr(s, w);
	if(p != NULL) {
		printf("W co trong xau S");
	}else {
		printf("W khong co trong xau S");
	}
	
	
}
