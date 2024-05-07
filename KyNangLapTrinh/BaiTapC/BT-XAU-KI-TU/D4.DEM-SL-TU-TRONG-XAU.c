#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char s[100]; 
int d = 0, i=0;
printf("Nhap xau: "); gets(s);
for (i = 0;s[i]!= '\0';i++)
if(s[i]!=' '&&s[i+1] ==' '|| s[i] !=' '&&s[i+1] =='\0')
d++;
if(d==0)
printf("Xau rong!"); 
else
printf("Ket qua: %d",d); 
return 0;
}
