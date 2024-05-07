#include<iostream>
using namespace std;
int main(){
int n,d=0;
cout<<"N = "; cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cout<<"a["<<i<<"] = ";
	cin>>a[i];
}
cout<<"Day A =";
//In day A vua nhap
for(int i=0;i<n;i++){
	cout<<" "<<a[i];
	if(a[i]<0) d++;
	
}
cout<<endl;
cout<<"So so am trong A: "<<d;
return 0;
}

