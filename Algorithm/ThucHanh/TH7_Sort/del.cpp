#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {6, 5, 8, 2, 9, 7};
    int size = a.size();

    for (int i = size; i > 3; i--) {
        a[i] = a[i - 1];
    }
    a[3] = 10;
    size++;

    for (int i = 0; i < size; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;
}

