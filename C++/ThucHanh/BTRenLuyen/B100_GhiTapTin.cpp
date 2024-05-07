#include<bits/stdc++.h>
using namespace std;
int main(){
FILE *file=fopen("sinhvien.txt","w");
fputs("sv1;Nguyen Van Hai;22/7/2004\n",file);
fputs("sv2;Nguyen Ngoc Quang;25/9/2003\n",file);
fputs("sv3;Hoang Duc Phong;18/8/2004\n",file);
fclose(file);
return 0;
}

