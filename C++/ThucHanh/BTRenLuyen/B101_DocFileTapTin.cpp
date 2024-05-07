#include<bits/stdc++.h>
using namespace std;
int main(){
FILE *file=fopen("sinhvien.txt","r");
char *s="\n";
while(1){
char str[100];
s=fgets(str,100,file);
if(s==NULL) break;
cout<<s;
}
fclose(file);
return 0;
}

