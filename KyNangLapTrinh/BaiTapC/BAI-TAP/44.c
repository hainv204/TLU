#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], c;
	printf("Xau:"); gets(S);
	printf("Ky tu:"); c = getchar();
	
	int dem = 0, i =0;
	
	for (i = 0; i < strlen(S); i++) {
		if (S[i] == c) dem++;
		}
	if(dem != 0) printf("Ky tu '%c' trong '%s': %i lan.\n",c,S,dem);
	if(dem == 0) printf("Ky tu '%c' khong co trong S.\n",c);
	printf("S in hoa: ");
	for (i = 0; i < strlen(S); i++) {
		printf("%c", toupper(S[i]) );
	}
	
	return 0;
}
