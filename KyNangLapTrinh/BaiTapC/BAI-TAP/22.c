#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], c;
	printf("Xau S:"); gets(S);
	int dem = 0, i = 0;
	for (i = 0; i < strlen(S); i++) {
		if (isupper(S[i])) dem++;
	}
	printf("So chu cai in hoa: %d\n", dem);
	printf("Dao nguoc S: ");
	for (i = strlen(S) - 1; i >= 0; i--) {
		printf("%c", S[i]);
	}
	return 0;
}
