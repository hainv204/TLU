/*Nhap 3 so nguyen duong a,b,c.Hay tim va in ra man hinh so nam giua(so thu 2)
Output:nhap 3 so nguyen duong
InPut:so nam giua*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, x;
 cout<<"Nhap a,b,c:";
 cin>>a>>b>>c;
 //TH1.a>b
 if(a>b){
 	if(a<c) x=a;
 	else if(b>c) x=b;
 	else x=c;
//TH2.a<b
 }else{
 	if(a>c) x=a;
 	else if(b<c) x=b;
 	else x=c;
 }
 cout<<"So nam giua: "<<x;
    return 0;
}

