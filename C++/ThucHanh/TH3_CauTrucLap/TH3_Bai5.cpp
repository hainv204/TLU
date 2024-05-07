#include<iostream>
using namespace std;
int main() {
//a.Tinh n!
	int n,gt=1,gtc=1,gtl=1;
	do{
	cout<<"Nhap N = ";
	cin>>n;
	}while(n<=0);
	for(int i=1; i<=n; i++) {
		gt*=i;
	}
	cout<<n<<"!= "<<gt<<endl;


//Cau b.Tinh giai thua le cua N: A=1.3.5...(2N+1)
for(int i=0;i<=n;i++){
gtl*=(2*i+1);
}
	cout<<"Giai thua le: "<<gtl<<endl;
	

//Cau c.Tinh giai thua chan cua N: B=2.4.6...(2N)
for(int i=1;i<=n;i++){
	gtc*=(2*i);
}
	cout<<"Giai thua chan: "<<gtc;
	return 0;
}

