#include <stdio.h>
#include <string.h>

int main(){
	
	char w[1000];
	char s[1000];
	int i, p, q;
	
	printf("Nhap W = "); gets(w);
	printf("Nhap S = "); gets(s);
	printf("P = "); scanf("%d", &p);
	printf("Q = "); scanf("%d", &q);
	int len = strlen(w);
	
	if( p > len || q > len );
	else {
		
		printf("Ket qua: ");
		for(i = 0; i < len; i++){
			
			if( i == p || i == q){
				
				if(p == q)printf("%s%s", s, s);
				else printf("%s", s);
				
			}
			printf("%c", w[i]);
		}
		
	}

	return 0;
	
}
