#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct SinhVien {
    int ma;
    char ten[50];
};

void XuatSinhVien(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].ma << "\t" << ds[i].ten << endl;
    }
}

void LuuFile() {
    SinhVien ds[3]; 
    ds[0].ma = 1;
    strcpy(ds[0].ten, "Hai");
    ds[1].ma = 2;
    strcpy(ds[1].ten, "Phong");
    ds[2].ma = 3;
    strcpy(ds[2].ten, "Quang");

    ofstream outfile("sinhvien.txt", ofstream::binary);
    if (!outfile.is_open()) {
        cout << "Khong the mo file de ghi du lieu." << endl;
        return;
    }

    outfile.write((char*)ds, sizeof(ds));
    outfile.close();
}

void DocFile() {
    ifstream infile("sinhvien.txt", ifstream::binary);
    if (!infile.is_open()) {
        cout << "Khong the mo file de doc du lieu." << endl;
        return;
    }

    infile.seekg(0, infile.end);
    streamoff size = infile.tellg();
    infile.seekg(0);
    
    int real = size / sizeof(SinhVien);
    SinhVien ds[real];
    infile.read((char*)ds, sizeof(ds));
    infile.close();
    XuatSinhVien(ds, real);
}

int main() {
    //LuuFile();
    DocFile();
    return 0;
}

