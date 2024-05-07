/*Viet chuong trinh tu dien Anh-Viet don gian dua tren bang bam tham do tuyen tinh.Moi muc tu trong tu dien gom tu tieng anh(key) va nghia tieng viet(value)
Yeu cau:
1.Viet ham tra ve so muc tu hien co trong tu dien
2.Viet ham cap nhat nghia tieng viet cua mot tu tieng anh dang co trong tu dien
3.Viet ham xoa mot muc tu dang co trong tu dien
4.Cai tien de co kiem tra trung lap tu tieng anh khi chen muc tu moi vao tu dien
5.Cai tien de khong phan biet chu hoa thuong doi voi cac tu tieng anh
*/
#include <bits/stdc++.h>
using namespace std;
// Muc tu trong tu dien
struct MucTu
{
    string TiengAnh;
    string TiengViet;
};
// Cau truc tu dien
struct TuDien
{
    MucTu *Table;  // con tro tro toi bang bam,moi phan tu cua bang la mot cay key_value
    int TableSize; // kich thuoc bang bam
    bool *Trong;   // Neu Trong[i]==true thi vi tri i trong bang dang trong,de xac dinh vi tri i trong bang co duoc sd hay chua
};
// Ham bam
int HashFunc(string TiengAnh, int TableSize)
{
    int HashVal = 0;
    for (int i = 0; i < TiengAnh.size(); i++)
    {
        HashVal += TiengAnh[i];
    }
    return HashVal % TableSize;
}
// Ham khoi tao
void KhoiTaoTD(TuDien &td, int size = 101)
{
    // kich thuoc bang bam 101
    td.TableSize = size;
    td.Table = new MucTu[size];
    td.Trong = new bool[size];
    for (int i = 0; i < size; i++)
    {
        td.Trong[i] = true;
    }
}
// Chen muc tu vao tu dien
void ChenMT(TuDien &td, MucTu mt)
{
    int h = HashFunc(mt.TiengAnh, td.TableSize);
    // neu table khong rong
    while (td.Trong[h] == false)
    { // khi vi tri h da co muc tu ta tim vi tri moi bang cach tang len 1
        if (td.Table[h].TiengAnh == mt.TiengAnh)//neu tu chen vao trung thi thoat
            return;
        h = (h + 1) % td.TableSize;
    }
    // Ket thuc vong lap
    td.Table[h] = mt;    // tim dc vi tri trong gan mt vao vi tri trong bang bam
    td.Trong[h] = false; // danh dau vi tri da duoc su dung
}
// Lay nghia tieng viet
string NghiaTiengViet(TuDien &td, string TiengAnh)
{
    int h = HashFunc(TiengAnh, td.TableSize);
    while (td.Trong[h] == false && td.Table[h].TiengAnh != TiengAnh) // dieu kien lap cho den khi tim duoc vi tri trong
        h = (h + 1) % td.TableSize;
    if (td.Trong[h] == false)
        return td.Table[h].TiengViet;
}
// In ra tu dien
void InTuDien(TuDien &td)
{
    for (int i = 0; i < td.TableSize; i++)
    {
        if (td.Trong[i] == false)
            cout << td.Table[i].TiengAnh << ": " << td.Table[i].TiengViet << endl;
    }
}
// Ham tra ve so muc tu
int CountMT(TuDien &td)
{
    int count = 0;
    for (int i = 0; i < td.TableSize; i++)
    {
        if (td.Trong[i] == false)
            count++;
    }
    return count;
}
// Ham cap nhat nghia Tieng Viet cua mot tu Tieng Anh
void CapNhatNghia(TuDien &td, string TiengAnh, string TiengViet)
{
    int h = HashFunc(TiengAnh, td.TableSize);
    while (td.Trong[h] == false && td.Table[h].TiengAnh != TiengAnh)
        h = (h + 1) % td.TableSize;
    if (td.Trong[h] == false)
        td.Table[h].TiengViet = TiengViet;
}
// Xoa muc tu
void XoaMT(TuDien &td, string TiengAnh)
{
    int h = HashFunc(TiengAnh, td.TableSize);
    while (td.Trong[h] == false && td.Table[h].TiengAnh != TiengAnh)
        h = (h + 1) % td.TableSize; // neu muc khong phai muc can xoa thi ta chuyen den vi tri tiep
    if (td.Trong[h] == false)
        td.Trong[h] = true;
}
// Kiem tra trung lap khi tra cuu
bool KTTrungLap(TuDien &td, string TiengAnh)
{
    int h = HashFunc(TiengAnh, td.TableSize);
    while (td.Trong[h] == false && td.Table[h].TiengAnh != TiengAnh)
        h = (h + 1) % td.TableSize;
    if (td.Trong[h]) // neu vi tri trong khong co trong tu dien
        return true;
    else
        return false;
}
// Chuan hoa khong phan biet hoa thuong
string ChuanHoa(string &TuChuanHoa)
{
    for (int i = 0; i < TuChuanHoa.size(); i++)
    {
        TuChuanHoa[i] = tolower(TuChuanHoa[i]);
    }
    return TuChuanHoa;
}
// Ham huy
void HuyTD(TuDien &td)
{
    delete[] td.Table;
    delete[] td.Trong;
}
int main()
{
    TuDien hai;
    MucTu mt;
    KhoiTaoTD(hai);
    MucTu mt1, mt2;
    mt1.TiengAnh = "cat";
    mt1.TiengViet = "con meo";
    mt2.TiengAnh = "cat";
    mt2.TiengViet = "con meo 1";
    cout << "Chi so cua muc tu 1:" << HashFunc(mt1.TiengAnh, hai.TableSize) << endl;
    ChenMT(hai, mt1);
    ChenMT(hai, mt2);
    cout << "Tu dien Tieng Anh tai vi tri thu 9: " << hai.Table[9].TiengAnh << endl;
    cout << "Danh sach tu dien: \n";
    InTuDien(hai);
    return 0;
}