#include<bits/stdc++.h>
using namespace std;
struct sophuc{
	float thuc,ao;
};
sophuc tinhhieu(sophuc a,sophuc b){
	sophuc hieu;
	hieu.thuc=a.thuc-b.thuc;
	hieu.ao=a.ao-b.ao;
	return hieu;
}
sophuc tinhtich(sophuc a,sophuc b){
	sophuc tich;
	tich.thuc=a.thuc*b.thuc+a.ao*b.ao*(-1);
	tich.ao=a.thuc*b.ao+b.thuc*a.ao;
	return tich;
}
int main(){
sophuc a,b;
cout<<"Cho so phuc z1:\n";
cout<<"Phan thuc: ";cin>>a.thuc;
cout<<"Phan ao: ";cin>>a.ao;
cout<<"Cho so phuc z2:\n";
cout<<"Phan thuc: ";cin>>b.thuc;
cout<<"Phan ao: ";cin>>b.ao;
sophuc hieu=tinhhieu(a,b);
sophuc tich=tinhtich(a,b);
cout<<"Z1 - Z2 = "<<hieu.thuc<<" + "<<hieu.ao<<"i"<<endl;
cout<<"Z1 * Z2 = "<<tich.thuc<<" + "<<tich.ao<<"i";
return 0;
}

