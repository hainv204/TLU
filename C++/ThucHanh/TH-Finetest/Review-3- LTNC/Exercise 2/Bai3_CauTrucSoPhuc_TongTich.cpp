#include<bits/stdc++.h>
using namespace std;
struct sophuc{
	float thuc,ao;
};
sophuc tinhtong(sophuc a,sophuc b){
	sophuc tong;
	tong.thuc=a.thuc+b.thuc;
	tong.ao=a.ao+b.ao;
	return tong;
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
sophuc tong=tinhtong(a,b);
sophuc tich=tinhtich(a,b);
cout<<"z1 + z2 = "<<tong.thuc<<" + "<<tong.ao<<"i"<<endl;
cout<<"z1 * z2 = "<<tich.thuc<<" + "<<tich.ao<<"i";
return 0;
}

