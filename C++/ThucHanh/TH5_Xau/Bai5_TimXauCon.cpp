#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Nhap xau str1: ";getline(cin,str1);
	cout<<"Nhap xau str2: ";getline(cin,str2);
	int pos=str1.find(str2),d=0;
	vector<int>v;
	while(pos!=string::npos){//string::npos duoc su dung de tim xau con trong xau chinh
		d++;
		v.push_back(pos);
		pos=str1.find(str2,pos+1);
	}
	if(d>0){
	cout<<"So lan xau str2 xuat hien trong xau str1: "<<d;
	cout<<"\nVi tri xuat hien cua xau str2 trong str1:";
	for(int i=0;i<v.size();i++)
	cout<<" "<<v[i];
	}else{
		str1=str1+""+str2;
		cout<<"Xau str1 sau khi chen: "<<str1;
	}
	return 0;
}
