#include<bits/stdc++.h>
using namespace std;
//Tao 1 cau truc Node
struct Node {
	int Data;
	Node *pNext;
};
//Tao cau truc dslk don
struct SingleList {
	Node *pHead;
};
//Ham khoi tao
void ListInit(SingleList &list) {
	list.pHead=NULL;
}
//Tao Node
Node *CreateNode(int d) {
	Node *pNode=new Node;
	if(pNode!=NULL) {
		pNode->Data=d;
		pNode->pNext=NULL;
	} else {
		cout<<"Cap phat bo nho that bai";
	}
	return pNode;
}
//Ham kiem tra danh sach dang rong hay khong
bool ListIsEmpty(SingleList&list){
	return(list.pHead==NULL);
}
//In danh sach
void PrintList(SingleList list) {
	Node *pTmp=list.pHead;
	while(pTmp!=NULL) {
		cout<<pTmp->Data<<" ";
		pTmp=pTmp->pNext;
	}
}
//Chen vao dau danh sach
void InsertFist(SingleList &list,int d) {
	Node *pNode=CreateNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
	} else {
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
//Xoa phan tu o dau danh sach
void DelFirst(SingleList &list) {
	Node *old=list.pHead;
	list.pHead=list.pHead->pNext;
	delete old;
}
// Huy toan bo danh sach
void DestroyList(SingleList &list) {
	Node *pTmp = list.pHead;
	while (pTmp != NULL) {
		Node *pNext = pTmp->pNext;
		delete pTmp;
		pTmp = pNext;
	}
	list.pHead = NULL;
}
int main() {
	SingleList list;
	ListInit(list);
	//Kiem tra xem ds dang rong hay chua
	cout<<"Danh sach dang rong?";
	cout<<(ListIsEmpty(list)?"YES":"NO")<<endl;	
	InsertFist(list,10);
	InsertFist(list,2);
	InsertFist(list,6);
	//In ra cac phan tu sau khi chen
	cout<<"Danh sach:";
	PrintList(list);
	//DelFirst(list);
	DestroyList(list);
	return 0;
}

