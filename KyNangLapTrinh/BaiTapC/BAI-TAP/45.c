#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char S[50];	
	printf("Xau S:"); gets(S);
	for ( ; ; ) {
		if (isspace(S[0])) {
			strcpy(&S[0], &S[1]);
		} else {
			break;
		}	
	}
	
	int i = 0;
	for (i = 0; i < strlen(S); i++) {
		if (isspace(S[i]) && isspace(S[i+1])) { 
			strcpy(&S[i], &S[i+1]);
			i--;
		}
	}
	
	if (isspace(S[strlen(S)-1])) {
		S[strlen(S)-1] = '\0';
	}
	printf("Chuan hoa S:%s", S);
	return 0;
}
