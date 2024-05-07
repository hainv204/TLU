#include<bits/stdc++.h>
using namespace std;
int main(){
int count=100;
int *p=&count;
cout<<"Dia chi cua bien count:"<<&count<<endl;
cout<<"Gia tri cua bien count:"<<count<<endl;
cout<<"Dia chi cua p quan li:"<<p<<endl;
cout<<"Gia tri cua p quan li:"<<*p<<endl;

int m=*p;
cout<<"Gia tri cua m="<<m<<endl;
int *x=p;//con tro tro toi con tro khac,x va p cung quan li mot o nho;x doi thi p cung doi
cout<<"Dia chi cua con tro x:"<<x<<endl;
cout<<"Gia tri cua con tro x dang tro toi:"<<*x<<endl;
*x=10;
cout<<"Gia tri cua con tro x dang tro toi:"<<*x<<endl;
cout<<"Gia tri cua bien count:"<<count;
return 0;
}

