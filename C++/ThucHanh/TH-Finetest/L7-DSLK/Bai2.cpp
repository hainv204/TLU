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
	Node*tmp=list.head;
	cout<<"In danh sach:";
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
}
void Print2(SingleList list){
	Node*tmp=list.head;
	while(tmp!=NULL){
		if((tmp->data)%2==0){
		cout<<" "<<tmp->data;
	}
		tmp=tmp->next;
	}
	cout<<endl;
}
void DelLast(SingleList&list){
	if(list.head==NULL){
		return;
	}else if(list.head->next==NULL){
		delete list.head;
		list.head=NULL;
	}else{
		Node*tmp=list.head;
		while(tmp->next->next!=NULL){
			tmp=tmp->next;
		}
		delete tmp->next;
		tmp->next=NULL;
	}	
}
int main(){
	SingleList list;
	Init(list);
	int n;
	do{
	cout<<"Cho n = "; cin>>n;
	}while(n<5);
	int d;
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu: ";
		cin>>d;
		InsertLast(list,d);
	}
	Print(list);
	cout<<"\nHay xoa phan tu o cuoi danh sach!\n";
	DelLast(list);
	Print(list);
	int x;
	cout<<"\nCho x = ";cin>>x;
	cout<<"Hay them x vao dau danh sach!\n";
	InsertFisrt(list,x);
	Print(list);
		cout<<"\nIn so chan trong danh sach:";
	Print2(list);
}
