#include<bits/stdc++.h>
using namespace std;
struct Node{
	float data;
	Node *next;
};
struct SingleList{
	Node *head;
};
void Init(SingleList&list){
	list.head=NULL;
}
Node *CreateNode(float d){
	Node*pNode=new Node;
	if(pNode!=NULL){
	pNode->data=d;
	pNode->next=NULL;
}
	return pNode;
}
void InsertFisrt(SingleList&list,float d){
	Node *pNode=CreateNode(d);
	if(list.head==NULL)
		list.head=pNode;
else{
	pNode->next=list.head;
	list.head=pNode;
}
}
void InsertLast(SingleList&list,float d){
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
	cout<<"Hien thi danh sach:";
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
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
void DelFirst(SingleList&list){
	Node*del=list.head;
	list.head=list.head->next;
	delete del;
	del=NULL;
}
int main(){
	SingleList list;
	Init(list);
	int n;
	do{
	cout<<"Cho n = "; cin>>n;
	}while(n<5||n>10);
	float d;
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>d;
		InsertLast(list,d);
	}
	Print(list);
	float x;
	cout<<"\nCho x = ";cin>>x;
	cout<<"Hay them x vao dau va cuoi danh sach!\n";
	InsertFisrt(list,x);
	InsertLast(list,x);
	Print(list);
	cout<<"\nHay xoa phan tu o dau va cuoi danh sach!\n";
	DelFirst(list);
	DelLast(list);
	Print(list);
	cout<<endl;
}
