#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outputFile("sole.txt"); //khai bao file luu du lieu
if(outputFile.is_open()){//kiem tra xem file co duoc mo khong
    for (int i = 1; i < 20; i += 2) {
        outputFile << i <<endl; //ghi so le ra file
    }
}
    outputFile.close();//dong file sau khi su dung
    return 0;
}
