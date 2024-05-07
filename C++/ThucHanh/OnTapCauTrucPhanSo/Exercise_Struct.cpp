#include <bits/stdc++.h>
using namespace std;
// cau truc sinh vien
struct SinhVien
{
    string MaSV;
    string Hoten;
    string Lop;
    float Diem;
};
// a.Nhap dssv
void NhapDS(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ma sinh vien: ";
        getline(cin, ds[i].MaSV);
        cout << "Ho ten: ";
        getline(cin, ds[i].Hoten);
        cout << "Lop: ";
        getline(cin, ds[i].Lop);
        cout << "Diem: ";
        cin >> ds[i].Diem;
    }
}
// b.Xuat dssv
void XuatDS(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].MaSV << "\t" << ds[i].Hoten << "\t" << ds[i].Lop << "\t" << ds[i].Diem << endl;
    }
}
// c.Nhap vao 1 lop,hien thi dssv lop do ra man hinh
void NhapLop(SinhVien ds[], int n, string a)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].Lop == a)
        {
            dem++;
            cout << ds[i].MaSV << "\t" << ds[i].Hoten << "\t" << ds[i].Lop << "\t" << ds[i].Diem << endl;
        }
    }
    if (dem == 0)
    {
        cout << "Khong co thong tin lop nao nhu vay!";
    }
}
// d.Nhap vao 1 lop va 1 diem.Xuat dssv lop do co diem lon hon 5
void NhapLopDiem(SinhVien ds[], int n, string b, float c)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].Lop == b && ds[i].Diem > c)
        {
            dem++;
            cout << ds[i].MaSV << "\t" << ds[i].Hoten << "\t" << ds[i].Lop << "\t" << ds[i].Diem << endl;
        }
    }
    if (dem == 0)
    {
        cout << "Khong co thong tin";
    }
} // e.Hien thi dssv co diem lon nhat
void DiemMax(SinhVien ds[], int n)
{
    float max = ds[0].Diem;
    for (int i = 0; i < n; i++)
    {
        if (max < ds[i].Diem)
        {
            max = ds[i].Diem;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max == ds[i].Diem)
            cout << ds[i].MaSV << "\t" << ds[i].Hoten << "\t" << ds[i].Lop << "\t" << ds[i].Diem << endl;
    }
}
// f.Nhap vao mot sv moi.Them sv do vao cuoi ds
void ThemSV(SinhVien ds[], int &n, int h)
{
    for (int i = n; i < n + h; i++)
    {
        cin.ignore();
        cout << "Ma sinh vien: ";
        getline(cin, ds[i].MaSV);
        cout << "Ho ten: ";
        getline(cin, ds[i].Hoten);
        cout << "Lop: ";
        getline(cin, ds[i].Lop);
        cout << "Diem: ";
        cin >> ds[i].Diem;
    }
    n = n + h;//so luong thay doi sau khi them vao cuoi
}
// g.Nhap vao mot sv them sv do vao sau sv thu k
void ThemSVk(SinhVien ds[], int &n, int k)
{
    n = n + 1;//tang so luong sinh vien trong ds len 1
    for (int i = n; i >= k; i--)
    {
        ds[i + 1] = ds[i]; // dich chuyen sv tu vi tri cuoi den vi tri thu k de tao cho trong them sv moi
    }
    cin.ignore();
    cout << "Ma sinh vien: ";
    getline(cin, ds[k].MaSV);
    cout << "Ho ten: ";
    getline(cin, ds[k].Hoten);
    cout << "Lop: ";
    getline(cin, ds[k].Lop);
    cout << "Diem: ";
    cin >> ds[k].Diem;
}
// h.Xoa sv vi tri thu k
void XoaK(SinhVien ds[], int &n, int k)
{
    for (int i = k; i < n; i++)
    {
        ds[i] = ds[i + 1];
    }
    n--;
}
//k.Sap xep sv theo diem giam dan
void SapXep(SinhVien ds[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ds[i].Diem < ds[j].Diem)
                swap(ds[i],ds[j]);
        }
    }
}
// l.Nhap vao mot lop va mot msv.Chuyen lop cua sv co ma vua nhap bang mot lop moi vua nhap
void ChuyenLop(SinhVien ds[], int n, string msv, string lop)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].MaSV == msv)
        {
            ds[i].Lop = lop;
        }
    }
}
// n.Nhap vao mot lop.Dua ra dssv dat diem lon nhat cua lop vua nhap
void LopMax(SinhVien ds[], int n, string lopmax)
{
    float max = -1;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].Lop == lopmax)
        {
            if (max < ds[i].Diem)
                max = ds[i].Diem;
        }
    }
    if (max == -1)
        cout << "Khong co thong tin sinh vien nao";
    else
        cout << "Diem max = " << max;
}
//.Xoa sinh vien o vi tri cuoi cung
void XoaCuoi(SinhVien ds[], int &n)
{
    if (n > 0)
    {
        n--;
    }
}
int main()
{
    SinhVien ds[100];
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    NhapDS(ds, n);
    cout << "Danh sach sinh vien sau khi nhap:\n";
    XuatDS(ds, n);
    // Hien thi dssv lop vua nhap
    string a;
    cin.ignore();
    cout << "\nNhap lop: ";
    getline(cin, a);
    cout << "Danh sach lop " << a << ":\n";
    NhapLop(ds, n, a);
    // Hien thi dssv lop do co diem lon hon 5
    string b;
    float c;
    cout << "\nNhap lop: ";
    getline(cin, b);
    cout << "Nhap diem: ";
    cin >> c;
    cout<<"Danh sach lop co diem >"<<c<<":\n";
    NhapLopDiem(ds, n, b, c);
    // DSSV co diem lon nhat
    cout << "\nDanh sach sinh vien co diem cao nhat:\n";
    DiemMax(ds, n);
    // Them sv vao cuoi ds
    int h;
    cout << "\nNhap so luong sinh vien muon them vao cuoi: ";
    cin >> h;
    ThemSV(ds, n, h);
    cout << "Danh sach sinh vien sau khi them vao cuoi:\n";
    XuatDS(ds, n);
    // Them sv vao sau sinh vien k
    int k;
    do
    {
        cout << "\nNhap vao vi tri muon chen: ";
        cin >> k;
    } while (k < 0 || k > n);
    ThemSVk(ds, n, k);
    cout << "Danh sach sau khi chen sau vi tri " << k << ":\n";
    XuatDS(ds, n);
    // Xoa sinh vien vi tri k
    do
    {
        cout << "\nNhap vao vi tri muon xoa: ";
        cin >> k;
    } while (k < 0 || k > n);
    XoaK(ds, n, k);
    cout<<"Danh sach sau khi xoa vi tri "<<k<<":\n";
    XuatDS(ds,n);
    // Danh sach sinh vien theo chieu giam dan cua diem
    SapXep(ds, n);
    cout << "\nDanh sach sinh vien theo chieu giam dan cua diem:\n";
    XuatDS(ds, n);
    // Chuyen lop
    string msv, lop;
    cin.ignore();
    cout << "\nNhap ma sinh vien: ";
    getline(cin, msv);
    cout << "Nhap lop can chuyen den: ";
    getline(cin, lop);
    ChuyenLop(ds,n,msv,lop);
    cout<<"Danh sach sinh vien sau khi chuyen lop:\n";
    XuatDS(ds,n);
    // Xuat diem max cua lop
    string lopmax;
    cout << "\nNhap vao mot lop: ";
    getline(cin, lopmax);
    LopMax(ds, n, lopmax);
    // Xoa sinh vien vi tri cuoi
    XoaCuoi(ds, n);
    cout << "\nDanh sach sinh vien sau khi xoa cuoi:\n";
    XuatDS(ds, n);
    return 0;
}

