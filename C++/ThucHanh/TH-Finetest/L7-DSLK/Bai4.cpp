#include<bits/stdc++.h>
using namespace std;
struct Node{
	float data;
	Node*next;
};
struct SingleList{
	Node*head;
};
void Init(SingleList&list){
	list.head=NULL;
}
Node*CreateNode(float d){
	Node*pNode=new Node;
	if(pNode!=NULL){
		pNode->data=d;
		pNode->next=NULL;
	}
	return pNode;
}
void InsertFirst(SingleList&list,float d){
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
	cout<<"\nHien thi danh sach:";
	Node*tmp=list.head;
	while(tmp!=NULL){
		cout<<" "<<tmp->data;
		tmp=tmp->next;
	}
}
int Size(SingleList list){
	Node*tmp=list.head;
	int size=0;
	while(tmp!=NULL){
		tmp=tmp->next;
		size++;
	}
	return size;
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
	cout<<"Cho so phan tu n = "; cin>>n;
}while(n<=4);
float number;
for(int i=0;i<n;i++){
	cout<<"Nhap phan tu thu "<<i+1<<": ";
	cin>>number;
	InsertLast(list,number);
}
Print(list);
float x;
cout<<"\nCho x = "; cin>>x;
cout<<"Hay them x vao dau va cuoi danh sach.";
InsertFirst(list,x);
InsertLast(list,x);
Print(list);
cout<<"\nHay xoa o cuoi danh sach:";
DelLast(list);
Print(list);
cout<<"\nDo dai cua DS = "<<Size(list);
return 0;
}

