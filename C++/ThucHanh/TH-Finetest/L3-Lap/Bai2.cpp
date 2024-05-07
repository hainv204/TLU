#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cout<<"Nhap x = "; cin>>x;
if(x>0&&x!=3){
cout<<"Ket qua: "<<(1+sqrt(x))/(x-3);
}else{
	cout<<"Bieu thuc khong xac dinh";
}
return 0;
}

