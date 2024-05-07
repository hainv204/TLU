#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
struct SingleList{
	Node *head;
};
void Init(SingleList&list){
	list.head=NULL;
}
Node *CreateNode(int d){
	Node*pNode=new Node;
	if(pNode!=NULL){
	pNode->data=d;
	pNode->next=NULL;
}
	return pNode;
}
void InsertFisrt(SingleList&list,int d){
	Node *pNode=CreateNode(d);
	if(list.head==NULL)
		list.head=pNode;
else{
	pNode->next=list.head;
	list.head=pNode;
}
}
void Print(SingleList list){
	Node*tmp=list.head;
	cout<<"Hien thi lai danh sach:";
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
}
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
SingleList list;
Init(list);
int n;
do{
	cout<<"Cho n = ";cin>>n;
}while(n<10||n>100);
for(int i=1;i<=n;i++){
	if(isPrime(i)) InsertFisrt(list,i);
}
Print(list);
int x;
cout<<"\nCho so nguyen x = ";cin>>x;
if(isPrime(x)){
	cout<<"x la so nguyen to. Hay them x vao dau danh sach.\n";
InsertFisrt(list,x);
}else{
	cout<<"x khong phai la so nguyen to!\n";
}
Print(list);
cout<<endl;
return 0;
}

