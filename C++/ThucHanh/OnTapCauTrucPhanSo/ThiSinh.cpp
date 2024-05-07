#include <bits/stdc++.h>
using namespace std;
// Khai bao cau truc thi sinh
struct ThiSinh
{
    int sbd, d, m, y;
    float diem;
    string ten, khoa;
};
// Ham nhap danh sach N thi sinh
void NhapDS(ThiSinh dsSV[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << endl;
        cout << "Nhap SBD: ";
        cin >> dsSV[i].sbd;
        cin.ignore();
        cout << "Nhap ten thi sinh: ";
        getline(cin, dsSV[i].ten);
        cout << "Nhap ngay sinh: ";
        cin >> dsSV[i].d >> dsSV[i].m >> dsSV[i].y;
        cin.ignore();
        cout << "Khoa: ";
        getline(cin, dsSV[i].khoa);
        cout << "Nhap diem thi: ";
        cin >> dsSV[i].diem;
    }
}
// Ham xuat dssv theo diem giam dan
void GiamDan(ThiSinh dsSV[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dsSV[i].diem < dsSV[j].diem)
                swap(dsSV[i], dsSV[j]);
        }
    }
}
// Ham xuat danh sach
void XuatDS(ThiSinh dsSV[], int n)
{
    cout << "----------------------------------------DANH SACH THI SINH----------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dsSV[i].sbd << "\t" << dsSV[i].ten << "\t" << dsSV[i].d << "-" << dsSV[i].m << "-" << dsSV[i].y << "\t" << dsSV[i].khoa << "\t" << dsSV[i].diem << endl;
    }
}
// Ham xuat ds thi sinh trung tuyen khoa CNTT >=25d
void DSTrungTuyen(ThiSinh dsSV[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (dsSV[i].diem >= 25 && dsSV[i].khoa == "CNTT")
        {
            cout << dsSV[i].sbd << "\t" << dsSV[i].ten << "\t" << dsSV[i].d << "-" << dsSV[i].m << "-" << dsSV[i].y << "\t" << dsSV[i].khoa << "\t" << dsSV[i].diem << endl;
        }
    }
}
// Ham tim kiem theo sbd(tim kiem tuan tu)
int Search(ThiSinh dsSV[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (dsSV[i].sbd == x)
            return i;
    }
    return -1;
}
int main()
{
    // Nhap so luong
    int n;
    do
    {
        cout << "Nhap vao so luong thi sinh: ";
        cin >> n;
    } while (n <= 0 || n >= 100);
    ThiSinh dsSV[n];
    // Nhap DS
    NhapDS(dsSV, n);
    // Xuat danh sach sinh vien theo diem giam dan
    GiamDan(dsSV, n);
    XuatDS(dsSV, n);
    // Xuat dssv cntt >=25
    cout << "\nDanh sach sinh vien trung tuyen khoa CNTT:\n";
    DSTrungTuyen(dsSV, n);
    // Tim theo sbd thi sinh
    int x;
    cout << "\nNhap so bao danh muon tim: ";
    cin >> x;
    int vitri = Search(dsSV, n, x);
    if (vitri != -1)
    {
        cout << "Thong tin so bao danh " << x << endl;
        cout << dsSV[vitri].sbd << "\t" << dsSV[vitri].ten << "\t" << dsSV[vitri].d << "-" << dsSV[vitri].m << "-" << dsSV[vitri].y << "\t" << dsSV[vitri].khoa << "\t" << dsSV[vitri].diem << endl;
    }
    else
    {
        cout << "Khong tim thay so bao danh nao nhu SBD " << x;
    }
    return 0;
}
