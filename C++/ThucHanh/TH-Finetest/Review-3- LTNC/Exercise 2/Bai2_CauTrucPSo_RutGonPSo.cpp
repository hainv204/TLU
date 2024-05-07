#include<bits/stdc++.h>
using namespace std;
struct phanso{
	int tu,mau;
};
int ucln(int a,int b){
	if(b==0) return a;
	return ucln(b,a%b);
}
void rutgon(phanso&ps){
	int gcd=ucln(ps.tu,ps.mau);
	ps.tu/=gcd;
	ps.mau/=gcd;
	if(ps.mau<0){
		ps.tu=-ps.tu;
		ps.mau=-ps.mau;
	}
}
int main(){
phanso a;
cout<<"Cho phan so a:\n";
cout<<"Tu: ";cin>>a.tu;
cout<<"Mau: ";cin>>a.mau;
if(a.mau==0){
	cout<<"Phan so khong hop le!";
}else{
	rutgon(a);
	cout<<"Chuan hoa phan so: "<<a.tu<<"/"<<a.mau;
}
return 0;
}

