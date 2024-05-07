#include<iostream>
using namespace std;
int main() {
	double x=1.0/2; //double x=(double)1/2;
	cout<<"x="<<x<<endl;//endl:xuong dong
//ep kieu rong ve hep
	int y,z;
	cout<<"Nhap y: ";
	cin>>y;
	cout<<"Nhap z: ";
	cin>>z;
	double w=(double)y/z;
	cout<<"W= "<<w<<endl;
//ep kieu hep ve rong->lam mat mat du lieu
	int k=1.5*2;
	cout<<"K= "<<k;//k=3 tra ve ket qua sai
	return 0;
}

