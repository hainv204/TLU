#include <bits/stdc++.h>
using namespace std;
struct khachhang
{
    string mak, tenk;
    int sdt, solg;
};
// khai bao vector chua ds khach hang va doi tuong khach hang
vector<khachhang> v;
khachhang k;
// nhap thong tin khach hang
void input()
{
    cout << "Nhap ma khach hang: ";
    getline(cin, k.mak);
    cout << "Nhap ten khach hang: ";
    getline(cin, k.tenk);
    cout << "Nhap so dien thoai: ";
    cin >> k.sdt;
    cout << "Nhap so luong don hang da mua: ";
    cin >> k.solg;
    v.push_back(k);
    cout << "Them thong tin khach hang thanh cong" << endl;
}
// xuat thong tin khach hang
void output()
{
    cout << "Ma khach hang"<< "\t"<< "Ten khach hang"<< "\t"<< "So dien thoai"<< "\t"<< "So luong don mua" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].mak << "\t" << v[i].tenk << "\t" << v[i].sdt << "\t" << v[i].solg << endl;
    }
}
// tim kiem theo ma
void search()
{
    string id;
    bool check = false;
    cout << "Nhap ma khach hang can tim: ";
    getline(cin, id);
    for (int i = 0; i < v.size(); i++)
    {
        if (id == v[i].mak)
        {
            cout << v[i].mak << "\t" << v[i].tenk << "\t" << v[i].sdt << "\t" << v[i].solg << endl;
            check = true;
            break;
        }
    }
    if (!check)
        cout << "Khach hang khong ton tai" << endl;
}
// sua thong tin khach hang
void editKH()
{
    string id;
    bool check = false;
    cout << "Nhap id khach hang can sua: ";
    getline(cin, id);
    for (int i = 0; i < v.size(); i++)
    {
        if (id == v[i].mak)
        {
            cout << "Nhap thong tin khach hang cap nhat:"<< endl;
            cout << "Ten khach hang: ";
            getline(cin, v[i].tenk);
            cout << "So dien thoai: ";
            cin>>v[i].sdt;
            cout << "So luong don mua: ";
            cin >> v[i].solg;
           // cin.ignore();
            cout << "Cap nhat thong tin khach hang thanh cong" << endl;
            check = true;
            break;
        }
    }
    if (!check)
        cout << "Khach hang khong ton tai" << endl;
}
// xoa thong tin khach hang
void deleteKH()
{
    string id;
    bool check = false;
    cout << "Nhap id khach hang muon xoa: ";
    getline(cin, id);
    for (int i = 0; i < v.size(); i++)
    {
        if (id == v[i].mak)
        {
            v.erase(v.begin() + i);
            check = true;
            cout << "Xoa khach hang thanh cong" << endl;
            break;
        }
    }
    if (!check)
        cout << "Khong tim thay thong tin khach hang can xoa" << endl;
}
int main()
{
    do
    {
        int d;
        cout << "--------------------------------------MENU--------------------------------------" << endl;
        cout << "1.Them luu tru thong tin khach hang" << endl;
        cout << "2.Tim kiem thong tin khach hang" << endl;
        cout << "3.Xuat danh sach khach hang" << endl;
        cout << "4.Sua thong tin khach hang" << endl;
        cout << "5.Xoa thong tin khach hang" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Moi nhap lua chon: ";
        cin >> d;
        cin.ignore();
        switch (d)
        {
        case 1:
            input();
            break;
        case 2:
            search();
            break;
        case 3:
            output();
            break;
        case 4:
            editKH();
            break;
        case 5:
            deleteKH();
            break;
        default:
        cout<<"Ban nhap sai lua chon"<<endl;
        break;
        }
        char x;
        cout << "Ban co muon tiep tuc?(Y/N):";
        cin >> x;
        if (x == 'n' || x == 'N')
            break;
    } while (true);
    return 0;
}