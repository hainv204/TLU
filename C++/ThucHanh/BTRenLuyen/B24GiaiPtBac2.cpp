#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	double a,b,c;
	cout<<"Nhap a,b,c:";
	cin>>a>>b>>c;
	if(a==0) { //TH1:a=0->bx+c=0
		if(b==0 && c==0) cout<<"Phuong trinh vo so nghiem";
		else if(b==0 &&c!=0) cout<<"Phuong trinh vo nghiem";
		else cout<<"Phuong trinh co mot nghiem x= "<<-c/b;
	} else { //TH2/a!=0
		double denta=b*b - 4*a*c;
		if(denta<0) {
			cout<<"Phuong trinh vo nghiem";
		} else if(denta==0) {
			cout<<"Phuong trinh co mot nghiem kep X1=X2= "<<-b/(2*a);
		} else {
			double x1,x2;
			x1=(-b+sqrt(denta))/2*a;
			x2=(-b-sqrt(denta))/2*a;
			cout<<"Phuong trinh co hai nghiem phan biet:\n";
			cout<<"X1= "<<x1<<endl;
			cout<<"X2= "<<x2;
		}
	}
	return 0;
}

