#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*next;
};
struct SingleList{
	Node*head;
};
void Init(SingleList&list){
	list.head=NULL;
}
Node*CreateNode(int d){
	Node*pNode=new Node;
	if(pNode!=NULL){
		pNode->data=d;
		pNode->next=NULL;
	}
	return pNode;
}
void InsertFirst(SingleList&list,int d){
	Node *pNode=CreateNode(d);
	if(list.head==NULL)
	list.head=pNode;
	else{
		pNode->next=list.head;
		list.head=pNode;
	}
}
void InsertLast(SingleList&list,int d){
	Node*pNode=CreateNode(d);
	if(list.head==NULL)
	list.head=pNode;
	else{
		Node*tmp=list.head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=pNode;
	}
}
void Print(SingleList list){
	cout<<"Hien thi danh sach:";
	Node*tmp=list.head;
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
}
int main(){
SingleList list;
Init(list);
int n;
do{
	cout<<"Cho n = "; cin>>n;
}while(n<20);
for(int i=1;i<=n;i++){
	if(i%2==0){
	InsertLast(list,i);
}
}
Print(list);
int x;
cout<<"\nCho so nguyen x = ";cin>>x;
if(x%2==0){
cout<<"Them x vao dau danh sach!\n";
InsertFirst(list,x);
}else{
cout<<"Them x vao cuoi danh sach!\n";
 InsertLast(list,x);
}
Print(list);
cout<<endl;
return 0;
}
