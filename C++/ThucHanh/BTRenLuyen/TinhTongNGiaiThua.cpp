//tinh giai thua sd vong for
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int gt=1,n,s=0;
	cout<<"N= ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		gt=gt*i;				//Tinh n giai thua
		s+=gt;				   //Tinh tong n giai thua
	}
	cout<<n<<"!= "<<gt<<endl;//Xuat n giai thua
	cout<<"F("<<n<<")= "<<s;//Xuat tong n giai thua
	return 0;
}

