#include<iostream>
using namespace std;
//tao cau truc node
struct Node {
	int data;
	Node *pNext;
};
//tao cau truc queue
struct Queue {
	Node *font;
	Node *back;
};
//Ham khoi tao
void QueueInit(Queue &q) {
	q.font=NULL;
	q.back=NULL;
}
//Ham kiem tra queue rong hay khong
bool QueueIsEmpty(Queue&q) {
	return q.font==NULL;
}
//Tao Node
Node *CreateNode(int d) {
	Node *pNode=new Node;
	if(pNode==NULL) {
		cout<<"Cap phat that bai!";

	} else {
		pNode->data=d;
		pNode->pNext=NULL;
	}
}
//Lay kich thuoc queue
int SizeOfQueue(Queue&q) {
	Node *pTmp=q.font;
	int size=0;
	while(pTmp!=NULL) {
		pTmp=pTmp->pNext;
		size++;
	}
	return size;
}
//Chen vao cuoi danh sach
void EnQueue(Queue&q,int d) {
	Node *pNode=CreateNode(d);
	if(q.font==NULL) {
		q.font=q.back=pNode;
	} else {
		q.back->pNext=pNode;
		q.back=pNode;
	}
}
//Lay phan tu ra khoi hang doi
int DeQueue(Queue&q) {
	int d=q.font->data;
	Node*pDel=q.font;
	q.font=q.font->pNext;
	pDel->pNext=NULL;
	delete pDel;
	return d;
}
//In tat ca ptu ra man
void PrintQueue(Queue q) {
	Node *pTmp=q.font;
	while(pTmp!=NULL) {
		cout<<pTmp->data<<" ";
		pTmp=pTmp->pNext;
	}
}
//Ham xoa tung Node cho den khi rong
void DelQueue(Queue&q) {
	while(q.font!=NULL)
		DeQueue(q);
}
//Tim phan tu
bool FindQueue(Queue&q,int x) {
	Node *pNode=q.font;
	while(pNode!=NULL) {
		if(x==pNode->data) return true;
		pNode=pNode->pNext;
	}
	return false;
}
int main() {
	Queue q;
	QueueInit(q);
//1.Kiem tra ds rog hay khong
	cout << "Queue dang rong? ";
	cout << (QueueIsEmpty(q) ? "YES" : "NO") << endl;
//2.Chen vao cuoi
	EnQueue(q,1);
	EnQueue(q,2);
	EnQueue(q,3);
	EnQueue(q,4);
//3.In danh sach queue
	cout<<"Cac phan tu trong Queue:";
	PrintQueue(q);
//In ra phan tu dau tien
	cout<<"\nPhan tu dau tien trong Queue:"<<q.font->data;
//4.Tim x xem co trong Queue hay khong
	int x;
	cout<<"\nNhap x:";
	cin>>x;
	int a=FindQueue(q,x);
	if(a==true) cout<<"X co trong Queue";
	else cout<<"X khong co trong Queue";
//5.Xoa tat ca ptu den khi rong
	DelQueue(q);
//6.Thong bao man queue rong hay chua
	cout << "\nQueue da rong? ";
	cout << (QueueIsEmpty(q) ? "YES" : "NO");
	return 0;
}


