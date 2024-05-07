#include<bits/stdc++.h>
using namespace std;
int main(){
int a=20,b=15;
int *pa,*pb,temp;
pa=&a; pb=&b;
temp=*pa;
*pa=*pb;//pa=pb:khac nhau ro rang o diem 2 con tro cung quan li mot o nho b=15 so voi *pa=*pb
*pb=temp;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"Dia chi con tro pa="<<pa<<endl;
pa++;//tang giam dia chi cua o nho
cout<<"Dia chi con tro pa="<<pa<<endl;
return 0;
}

