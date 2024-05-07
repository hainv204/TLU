#include <bits/stdc++.h>
using namespace std;
// Kieu phan tu
typedef int T;
// Cau truc dong nhi phan
struct BinaryHeap
{
    int CurrentSize; // so phan tu hien co
    vector<T> array; // vector chua cac phan tu kieu so nguyen
};
// Khai bao nguyen mau cho ham buildHeap
void buildHeap(BinaryHeap &bh);
// Ham khoi tao dong rong
void Init(BinaryHeap &bh, int capacity = 100)
{
    bh.array.resize(capacity + 1);
    bh.CurrentSize = 0;
}
// Khoi tao dong tu danh sach voi gia tri da cho
void Init(BinaryHeap &bh, vector<T> &elems)
{
    bh.array.resize(elems.size() + 10);
    bh.CurrentSize = elems.size();
    for (int i = 0; i < elems.size(); i++)
    {
        bh.array[i + 1] = elems[i];
    }
    buildHeap(bh);
}
// Chen vao dong
void Insert(BinaryHeap &bh, T x) // chen x vao dong
{
    // Tang kich thuoc vector neu vector day
    if (bh.CurrentSize == bh.array.size() - 1)
        bh.array.resize(bh.array.size() * 2);
    // Tham thau nguoc
    bh.CurrentSize++;          // so nut cua cay phai tang len 1
    int hole = bh.CurrentSize; // vi tri cuoi cung cua cay[hole: lo trong]
    while (hole > 1 && x < bh.array[hole / 2])
    { // dieu kien lon hon nut goc va x chen vao phai nho hon cha
        bh.array[hole] = bh.array[hole / 2];
        hole = hole / 2; // doi cho neu cha con
    }
    bh.array[hole] = x; // sau khi vong lap ket thuc dat x vao vi tri
}
// Tham thau xuoi
void pecolateDown(BinaryHeap &bh, int hole)
{
    T x = bh.array[hole];
    int child; // khoi tao nut hien tai
    while (hole * 2 <= bh.CurrentSize)
    {
        child = hole * 2;
        // Xac dinh nut con nho hon cua lo trong
        if (child < bh.CurrentSize && bh.array[child + 1] < bh.array[child])
            child++;
        // x lon hon gia tri nut con nho hon:thuc hien doi cho
        if (x > bh.array[child])
        {
            bh.array[hole] = bh.array[child];
            hole = child;
        }
        else
        {
            break;
        }
        bh.array[hole] = x;
    }
}
// Xoa khoi dong
void DeleteMin(BinaryHeap &bh)
{
    bh.array[1] = bh.array[bh.CurrentSize];
    bh.CurrentSize--;
    // Tham thau xuoi
    pecolateDown(bh, 1);
}
// Tniet lap tinh chat thu tu dong
void buildHeap(BinaryHeap &bh)
{
    for (int i = bh.CurrentSize / 2; i > 0; i--)
        pecolateDown(bh, i);
}
// Ham in dong nhi phan
void PrintHeap(BinaryHeap &bh)
{
    for (int i = 1; i <= bh.CurrentSize; i++)//vector nen bat dau duyet tu 1
    {
        cout << bh.array[i] << " ";
    }
    cout << endl;
}
int main()
{
    BinaryHeap bh;
    Init(bh);
    // Chen vao dong
    Insert(bh, 13);
    Insert(bh, 21);
    Insert(bh, 24);
    Insert(bh, 31);
    Insert(bh, 65);
    Insert(bh, 26);
    Insert(bh, 32);
    Insert(bh, 16);
    Insert(bh, 19);
    Insert(bh, 68);
    // In dong nhi phan
    cout << "Dong nhi phan:\n";
    PrintHeap(bh);
    return 0;
}