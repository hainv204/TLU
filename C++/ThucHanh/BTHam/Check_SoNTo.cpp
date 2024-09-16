#include <iostream>
#include <cmath>
using namespace std;
/*
Chạy số n.tố đến căn n vì một số nguyên tố chia cho số lớn hơn căn của nó thì chắc chắn chia hết một số nhỏ hơn căn của nó
=>Kết luận: ta chỉ cần kiểm tra 1 số từ 2 đến căn n,nếu số cần kiểm tra không chia hết từ 2->căn n thì số đó là số nguyên tố
VD.Kiểm tra n=36 thì 36 chia hết cho một số lớn hơn 6(ví dụ 9) thì nó cx chia hết cho một số nhỏ hơn 6(ví dụ 4) => 36 không phải số nguyên tố
*/
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimeNumbers(int arr[], int size) {
    cout << "\nCac so trong mang: ";
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "N= ";
    cin >> n;

    int arr[n];
    cout << "Phan Tu: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printPrimeNumbers(arr, n);

    return 0;
}

