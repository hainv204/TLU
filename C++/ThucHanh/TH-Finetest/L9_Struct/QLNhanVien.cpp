#include<iostream>
#include<string>
using namespace std;
struct NhanVien{
    string manv,tennv,chucvu;
    float hsLuong,luong,phucap,thuclinh;
};
//Tinh luong,phu cap,thuc linh
float TinhLuong(float hs){
    return hs*1490000;
}
float TinhPhuCap(string cv){
    if(cv=="TP") return 1000000;
    if(cv=="PP") return 700000;
    if(cv=="NV") return 300000;
}
void ThucLinh(NhanVien &nv){
    nv.luong=TinhLuong(nv.hsLuong);
    nv.phucap=TinhPhuCap(nv.chucvu);
    nv.thuclinh=nv.luong + nv.phucap;
}
//nhap ds nhan vien
void input(int n,NhanVien nv[]){
    for(int i=0;i<n;i++){
    cout<<"Nhap ma nhan vien: ";getline(cin,nv[i].manv);
    cout<<"Nhap ten nhan vien: ";getline(cin,nv[i].tennv);
    cout<<"Nhap chuc vu: ";getline(cin,nv[i].chucvu);
    cout<<"Nhap he so luong: ";cin>>nv[i].hsLuong;cin.ignore();
    ThucLinh(nv[i]);
    }
}
//xuat danh sach nhan vien
void output(int n,NhanVien nv[]){
    cout<<"MaNV"<<"\t"<<"TenNV"<<"\t"<<"Chuc vu"<<"\t"<<"HSluong"<<"\t"<<"Luong"<<"\t"<<"Phu cap"<<"\t"<<"Thuc linh"<<endl;
    for(int i=0;i<n;i++){
        cout<<nv[i].manv<<"\t"<<nv[i].tennv<<"\t"<<nv[i].chucvu<<"\t"<<nv[i].hsLuong<<"\t"<<nv[i].luong<<"\t"<<nv[i].phucap<<"\t"<<nv[i].thuclinh<<endl;
    }
}
//sap xep nhan vien theo giam dan thuc linh
void Sort(int n,NhanVien nv[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nv[i].thuclinh<nv[j].thuclinh) swap(nv[i],nv[j]);
        }
    }
}
//In danh sach nhan vien co chuc vu TP
void OutputTP(int n,NhanVien nv[]){
    cout<<"Danh sach nhan vien co chuc vu TP:\n";
    cout<<"MaNV"<<"\t"<<"TenNV"<<"\t"<<"Chuc vu"<<"\t"<<"HSluong"<<"\t"<<"Luong"<<"\t"<<"Phu cap"<<"\t"<<"Thuc linh"<<endl;
    for(int i=0;i<n;i++){
        if(nv[i].chucvu=="TP"){
        cout<<nv[i].manv<<"\t"<<nv[i].tennv<<"\t"<<nv[i].chucvu<<"\t"<<nv[i].hsLuong<<"\t"<<nv[i].luong<<"\t"<<nv[i].phucap<<"\t"<<nv[i].thuclinh<<endl;
        }
    }
}
//Them ds nhan vien khong lam thay doi sap xep
 void InsertNV(int &n, NhanVien nv[], NhanVien a) {
    int i = n - 1;
    while (i >= 0 && nv[i].hsLuong > a.hsLuong) {
        nv[i + 1] = nv[i];
        i--;
    }
    nv[i + 1] = a;
    n++;
}
//Xoa danh sach nhan vien khoi danh sach
void DeleteNV(int &n, NhanVien nv[], float hs_luong) {
    int vt = 0;
    for (int i = 0; i < n; i++) {
        if (nv[i].hsLuong >= hs_luong) {
            nv[vt++] = nv[i];
        }
    }
    n = vt;
}

int main(){
    int d,n;
    do{
    cout<<"Nhap so nhan vien: ";cin>>n;
    }while(n<=0);
    NhanVien nv[n];
    NhanVien a;
do{
cout<<"--------------------------------MENU--------------------------------"<<endl;
cout<<"2.Nhap danh sach nhan vien"<<endl;
cout<<"3.Tinh luong nhan vien"<<endl;
cout<<"4.In ra danh sach nhan vien"<<endl;
cout<<"5.Sap xep danh sach nhan vien giam dan theo Thuc linh"<<endl;
cout<<"6.In ra man danh sach nhan vien co chuc vu TP"<<endl;
cout<<"7.Them ds nhan vien k thay doi thu tu"<<endl;
cout<<"8.Xoa danh sach nhan vien co He so luong < hs_luong"<<endl;
cout<<"---------------------------------------------------------------------"<<endl;
cout<<"Moi lua chon: ";cin>>d;cin.ignore();
switch(d){
    case 2:
       input(n,nv);
        break;
    case 3:
    cout<<"Da tinh toan luong,phu cap,thuc linh thanh cong!"<<endl;
    break;
    case 4:
    cout<<"Danh sach Nhan vien:\n";
    output(n,nv);
    break;
    case 5:
    Sort(n,nv);
    cout<<"Danh sach nhan vien sau sap xep:\n";
    output(n,nv);
    break;
    case 6:
    OutputTP(n,nv);
    break;
    case 7:
    cout << "Nhap thong tin nhan vien can them" << endl;
    cout << "MaNV: "; getline(cin,a.manv);
    cout << "TenNV: "; getline(cin,a.tennv);
    cout << "Chuc vu: "; getline(cin,a.chucvu);
    cout << "He so luong: "; cin >>a.hsLuong;cin.ignore();
    ThucLinh(a);
    InsertNV(n,nv,a);
    break;
    case 8:
    float hs_luong;
    cout<<"Nhap hs_luong: ";cin>>hs_luong;cin.ignore();
    DeleteNV(n,nv,hs_luong);
    break;
    default:
    cout<<"Khong hop le!"<<endl;
    break;
}
}while(d!=0);
return 0;
system("pause");
}