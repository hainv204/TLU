#include <bits/stdc++.h>
using namespace std;
struct Node {
    int name;
    int value;
};
int sosanh(Node a,Node b){
    return a.value<b.value;
}
int n,m;
vector <Node> arr[100];
bool check[100];
void input(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        Node x,y;
        cin>>x.name>>x.value>>y.name>>y.value;
        arr[x.name].push_back(y);
        arr[y.name].push_back(x);
    }
    memset(check,false,sizeof(check));
}
void search_beam(Node x,int k){
    vector <Node> v;
    v.push_back(x);
    while(!v.empty()){
        int x= v.front().name;
        cout<<x<<" ";
        v.erase(v.begin());
        check[x]=true;
        int d=0;
        for(Node i:arr[x]){
            if(check[i.name]==false){
                v.push_back(i);
                d++;
            }
            if(d==k)    break;
        }
        sort(v.begin(),v.end(),sosanh);
    }
}
int main(){
    Node x;
    x.name=1;
    x.value=10;
    input();
    search_beam(x,1);

}