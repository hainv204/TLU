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
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
}
int SizeOfList(SingleList list){
	int size=0;
	Node*tmp=list.head;
	while(tmp!=NULL){
		tmp=tmp->next;
		size++;
	}
	return size;
}
int main(){
SingleList list;
Init(list);
float d;
do{
	cout<<"Nhap phan tu: ";
	cin>>d;
	if(d==0) break;
		InsertLast(list,d);
}while(d>0||d<0);

cout<<"\nIn danh sach:";
Print(list);
float x;
cout<<"\nCho x = "; cin>>x;
cout<<"Hay them x vao dau va cuoi danh sach:\n";
InsertFisrt(list,x);
InsertLast(list,x);
cout<<"In danh sach:";
Print(list);
cout<<"\nDo dai cua DS = "<<SizeOfList(list);
return 0;
}

