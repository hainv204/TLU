#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	char s[50];
	printf("Xau S:");
	gets(s);
	int i,d=0;
	for (i = 0;s[i]!= '\0';i++)
if((s[i]!=' '&&s[i+1] ==' ')|| (s[i]!=' '&&s[i+1] =='\0'))
d++;
printf("Xau S co %d tu!",d);
printf("\nXau S in hoa:%s",strupr(s));
return 0;
}

