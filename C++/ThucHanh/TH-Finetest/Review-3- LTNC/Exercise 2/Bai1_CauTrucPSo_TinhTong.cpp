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
phanso tinhtong(phanso a,phanso b){
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
	tong.mau=a.mau*b.mau;
	rutgon(tong);
	return tong;
}
int main(){
phanso a,b;
cout<<"Phan so a:\n";
cout<<"Tu: ";cin>>a.tu;
cout<<"Mau: ";cin>>a.mau;
cout<<"Phan so b:\n";
cout<<"Tu: ";cin>>b.tu;
cout<<"Mau: ";cin>>b.mau;
if(a.mau==0||b.mau==0){
	cout<<"Co phan so khong hop le!";
}else{
	phanso tong=tinhtong(a,b);
	cout<<"Tong a + b = "<<tong.tu<<"/"<<tong.mau;
}
return 0;
}

