#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], c;
	printf("Xau S:"); gets(S);
	int dem = 0, i = 0;
	for (i = 0; i < strlen(S); i++) {
		if (isalpha(S[i])) dem++;	
	}
	printf("So chu cai trong S: %i\n", dem);
	int dem2 = 0;
	for (i = 0; i < strlen(S); i++) {
		if (isprint(S[i]) ) dem2++;	
	}
	printf("Xau S co %d ky tu.\n", dem2);
	printf("In thuong S:");
	for(i = 0; i < strlen(S); i++){
		printf("%c",tolower(S[i]));
	}
	
	return 0;
}
