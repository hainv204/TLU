#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50], W[50];
	int i=0,dem=0;
	printf("Xau S:"); gets(S);
	
	for (i = 0; i < strlen(S); i++) {
		if (isspace(S[0])) {
			strcpy(&S[0], &S[1]);
		}
		if (isspace(S[i]) && isspace(S[i+1])) {
			strcpy(&S[i], &S[i+1]);
			i--;
		}
		if (isspace(S[strlen(S)-1])) {
			S[strlen(S)-1] = '\0';
		}
	}
	
	//dem tu
	if (S[0] != '\0') {
		dem = 1;
		for (i = 0; i < strlen(S); i++) {
			if (isspace(S[i]))
				dem++;
		}
	}
	printf("Xau S co %i tu.\n", dem);
	printf("Tu W:"); gets(W);
	
	if (strstr(S, W) == 0) {
		printf("W khong co trong xau S.");
	} else {
		printf("W co trong xau S.");
	}
	return 0;
}
