#include<bits/stdc++.h>
using namespace std;
struct Node{
    int name;
    int value;
};
int g[50],f[50];
int n,m,a[50][50];    //Nhap so dinh va so canh
vector <Node> arr[100];
bool check[100];
bool sosanh(Node a,Node b){
    return a.value<b.value;
}
void input(){
    cout<<"Nhap so dinh va so canh: ";
    cin>>n>>m;
    for(int i=0;i<m;i++){
        Node x,y;   //Khai bao cac canh
    cin>>x.name;    //nhap vao cac canh
    cin>>x.value;   //moi dinh gom ten dinh va gia tri
    cin>>y.name;
    cin>>y.value;
    cin>>a[x.name][y.name];
        arr[x.name].push_back(y);
        arr[y.name].push_back(x);   
    }
    memset(check,false,sizeof(check));
}
void Search_best_Frist(Node x){
    vector <Node> q;
    q.push_back(x);
    g[1]=0;
    while(!q.empty()){
        sort(q.begin(), q.end(), [](Node a, Node b) {
            return f[a.name] < f[b.name];
        });
        Node v=q.front();
        q.erase(q.begin());
        cout<<v.name<<" ";
        check[v.name]=true;
        for(Node x:arr[v.name]){
            if(check[x.name]==false){
                q.push_back(x);
                g[x.name]=g[v.name]+a[v.name][x.name];
                f[x.name]=g[x.name]+x.value;
            }
        }
        
    }                
}
int main(){
    Node x;
    x.name=1;
    x.value=10;
    input();
    Search_best_Frist(x);
}