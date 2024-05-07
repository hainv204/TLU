#include<bits/stdc++.h>
using namespace std;
struct Node {
    int name;
    int value;
};

bool sosanh(Node a, Node b) {
    return a.value < b.value;
}

vector<int> save_Node;
int n, m;
vector<Node> arr[50];
int k[50][50];
int f[50], g[50];
bool check[50];

void input() {
    cout << "Nhap so dinh, canh: ";
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        Node x, y;
        cin >> x.name >> x.value >> y.name >> y.value;
        cin >> k[x.name][y.name];
        arr[x.name].push_back(y);
        save_Node.push_back(x.name);
    }
    

}

int main() {
    Node x;
    x.name = 1;
    x.value = 10;
    input();

    cout << "Vector sau khi loai bo trung lap: ";
    for (int x : save_Node) {
        cout << x << " ";
    }
    system("pause");
    return 0;
}
