#include<bits/stdc++.h>
#define pi 3.14
using namespace std;
//Tinh dien tich hinh tron
float dtht(float r) {
	return pi*r*r;
}
//Tinh chu vi hinh tron
float cvht(float r) {
	return 2*pi*r;
}
//Tinh dien tich hinh vuong
float dthv(float c) {
	return c*c;
}
//Tinh chu vi hinh vuong
float cvhv(float c) {
	return 4*c;
}
//Tinh dien tich hinh chu nhat
float dthcn(float a, float b) {
	return a*b;
}
//Tinh chu vi hinh chu nhat
float cvhcn(float a, float b) {
	return 2*(a+b);
}
//Tinh dien tich hinh tam giac
float dttg(float e, float f, float g) {
	float p = (e+f+g)/2;
	return sqrt(p*(p-e)*(p-f)*(p-g));
}
//Tinh chu vi hinh tam giac
float cvtg(float e, float f, float g) {
	return (e+f+g);
}
int main() {
	while(true) {
		cout<<"********************************************\n";
		cout<<"Chon 1:lam viec voi hinh tron\n";
		cout<<"Chon 2:lam viec voi hinh vuong\n";
		cout<<"Chon 3:lam viec voi hinh chu nhat\n";
		cout<<"Chon 4:lam viec voi hinh tam giac\n";
		cout<<"********************************************\n";
		int n;
		cout<<"Chon che do lam viec: ";
		cin>>n;
		switch(n) {
			case 1:
				float r;
				do {
					cout<<"Ban kinh: ";
					cin>>r;
				} while(r<0);
				cout<<"Chu vi hinh tron: "<<cvht(r)<<endl;
				cout<<"Dien tich hinh tron: "<<dtht(r);
				break;
			case 2:
				float c;
				do {
					cout<<"Canh hinh vuong: ";
					cin>>c;
				} while(c<=0);
				cout<<"Chu vi hinh vuong: "<<cvhv(c)<<endl;
				cout<<"Dien tich hinh vuong: "<<dthv(c);
				break;
			case 3:
				float a,b;
				do {
					cout<<"Chieu dai va chieu rong hcn: ";
					cin>>a>>b;
				} while(a<=0||b<=0);
				cout<<"Chu vi hcn: "<<cvhcn(a,b)<<endl;
				cout<<"Dien tich hcn: "<<dthcn(a,b);
				break;
			case 4:
				float e,f,g;
				do {
					cout<<"Do dai 3 canh tam giac: ";
					cin>>e>>f>>g;
				} while(e<=0||f<=0||g<=0||(e+f)<=g||(e+g)<=f||(g+f)<=e);
				cout<<"Chu vi tam giac: "<<cvtg(e,f,g)<<endl;
				cout<<"Dien tich tam giac: "<<dttg(e,f,g);
				break;
		}
		char x;
		cout<<"\nBan co muon choi tiep khong?(y/n): ";
		cin>>x;
		if(x=='n') return 0;
	}
}

