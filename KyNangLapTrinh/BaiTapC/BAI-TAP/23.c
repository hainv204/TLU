#include <stdio.h>
#include <string.h>
int main(){
	char S[50], c;
	printf("Xau S:"); gets(S);
	int dem = 0, i =0;
	for (i = 0; i < strlen(S); i++) {
		if (isdigit(S[i])) dem++;
	}
	printf("So chu so: %d\n", dem);
	printf("Xau S in thuong: ");
	for (i = 0; i < strlen(S); i++) {
		printf("%c", tolower(S[i]));		
	}
	return 0;
}

