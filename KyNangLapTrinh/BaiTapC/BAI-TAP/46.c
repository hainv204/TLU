#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[1000]={'\0'},q[100]={'0','1','2','3','4','5','6','7','8','9'};
	int i,a=0;
	printf("Xau S:");
	fflush(stdin);
	gets(s);
	for (i=0;i<=strlen(s);i++)
	{
		int k;
		for (k=0;k<=9;k++)
		if (s[i]==q[k])
		{
			int j;
			for (j=i;j<=strlen(s);j++)
			{
				s[j]=s[j+1];
				s[j+1]='\0';
			}
			i--;
		}
	}
	printf("Xoa chu so trong S: %s",s);
	
	while (s[0]==' ')
	    strcpy(&s[0],&s[1]);
	while (s[strlen(s)-1]==' ')
	    strcpy(&s[strlen(s)-1],&s[strlen(s)]);
	for(i=0; i<strlen(s) ;i++)
	    if ((s[i]==' ')&&(s[i+1]==' '))
	{
		strcpy(&s[i],&s[i+1]);
		i--;
	}
	printf("\nChuan hoa S:%s",s);	
	return 0;
}
