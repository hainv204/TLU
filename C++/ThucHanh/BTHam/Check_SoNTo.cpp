#include <iostream>
#include <cmath>
using namespace std;

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

