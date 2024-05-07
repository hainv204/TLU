#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], c;
	printf("Xau S:"); gets(S);
	printf("Ky tu c:"); c = getchar();
	
	int dem = 0, i =0;
	
	for (i = 0; i < strlen(S); i++) {
		if (S[i] == c) dem++;
		}
	printf("Ky tu '%c' xuat hien %i lan trong xau S\n",c,dem);
	printf("In hoa:");
	for (i = 0; i < strlen(S); i++) {
		printf("%c", toupper(S[i]) );
	}
	
	return 0;
}
