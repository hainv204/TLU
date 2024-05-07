#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>

int main()
{
   char S[100],C[50];
   char temp[100],*p;
   int dem=0,i;
   printf("Xau S:");
   gets(S);
   printf("Ky tu C:");
   gets(C);
   p = strstr(S,C);
   while(p!=NULL)
   {
      dem++;
      p = strstr(p+1,C);
   }
   
   printf("Co %d ky tu C trong xau S\n",dem);
   printf("Xau S doi nguoc hoa thuong: ");
   for(i = 0;i<strlen(S);i++)
   {
      if(isupper(S[i]))
         printf("%c",tolower(S[i]));
      else
         printf("%c",toupper(S[i]));
   }
}
