#include <bits/stdc++.h>
using namespace std;
struct Node {
    int name;
    int value;
};
int sosanh(Node a,Node b){
    return a.value<b.value;
}
int n,m;//số đỉnh,cạnh

vector <Node> adj[100];//các phần tử trong mảng là 1 vector nguyên
bool check[100];//mảng chứa các đỉnh đã thăm hay chưa 
void input(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        Node x,y;
        cin>>x.name>>x.value>>y.name>>y.value;//nhập danh sách kề 
        adj[x.name].push_back(y);
        adj[y.name].push_back(x);
    }
    memset(check,false,sizeof(check));//đặt lại giá trị cho các phần tử trong mảng check = false
    //sắp xếp các phần tử trong vector dùng chỉ sổ để duyệt phần tử, không dùng được duyệt theo phạm vi
    for(int i=0;i<n;i++){
        sort(adj[i].begin(),adj[i].end(),sosanh);
    }
}
void dfs(Node u){
    cout<<u.name<<" ";
    check[u.name]=true;
    for(Node x:adj[u.name]){
        if(check[x.name]!=true)
        dfs(x);
    }
}
int main(){
    Node x;
    x.name=1;
    x.value=10;
    input();
    cout<<"Thuật toán leo doi: ";
    dfs(x);
}
