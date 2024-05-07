#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	int sbd;
	string ten;
	float diem;
};
string ChuanHoa(string ten){
	string tu;
	for(int i=0;i<ten.size();i++){
		ten[i]=tolower(ten[i]);
	}
	stringstream ss(ten);
	vector<string>v;
	while(ss>>tu){
		tu[0]=toupper(tu[0]);
		v.push_back(tu);
	}
	string chuanhoaten;
	for(int i=0;i<v.size();i++){
		chuanhoaten+=v[i];
		if(i!=v.size()-1) chuanhoaten+=" ";
	}
	return chuanhoaten;
}
void nhap(sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<"SBD: ";cin>>ds[i].sbd;cin.ignore();
		cout<<"Ho va ten: ";getline(cin,ds[i].ten);
		ds[i].ten=ChuanHoa(ds[i].ten);
		cout<<"Diem: ";cin>>ds[i].diem;cin.ignore();
	}
}
void Xuat(sinhvien ds[],int n){
	cout<<"Danh sach SV:\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].sbd<<"\t"<<ds[i].ten<<"\t"<<ds[i].diem<<endl;
	}
}
int main(){
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0);
cin.ignore();
sinhvien ds[n];
nhap(ds,n);
Xuat(ds,n);
return 0;
}

