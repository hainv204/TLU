#include<bits/stdc++.h>
using namespace std;
int main(){
int *p;
p=new int;//cap phat bo nho kieu int
*p=10;//gan gia tri bang 10 tai o nho ma p dang tro toi
cout<<"Gia tri tai dia chi con tro p tro toi="<<*p<<endl;
cout<<"Dia chi tai con tro p="<<p;
delete p;//neu khong delete se bi loi memory leak
return 0;
}

