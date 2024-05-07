#include<bits/stdc++.h>
using namespace std;
//Tao cau truc Node
struct Node {
	int data;
	Node *pLink;//trong dslk don plink=pnext
};
//Dinh nghia stack
typedef Node *Stack;
//Ham khoi tao
void StackInit(Stack &stack) {
	stack=NULL;
}
//Ham kiem tra xem ngan xep dang rong hay khong
bool StackIsEmpty(Stack &stack) {
	return stack==NULL;
}
//Tao Node
Node *CreateNode(int d) {
	Node *pNode=new Node;
	pNode->data=d;
	pNode->pLink=NULL;
}
//Tao ham push dua doi tuong vao stack
void push(Stack &stack,int d) {
	Node *pNode=CreateNode(d);
	if(stack==NULL) {
		stack=pNode;
	} else {
		pNode->pLink=stack;
		stack=pNode;
	}
}
//Tao ham pop lay doi tuong
int pop(Stack &stack) {
	int d=stack->data;
	Node *pDel=stack;
	stack=stack->pLink;
	pDel->pLink=NULL;
	delete pDel;
	return d;
}
//In tat ca ptu ra man
void PrintStack(Stack stack) {
	Node *pTmp=stack;
	while(pTmp!=NULL) {
		cout<<pTmp->data<<" ";
		pTmp=pTmp->pLink;
	}
}
//Ham tim x co trong stack khong
bool FindStack(Stack&stack,int x) {
	Node *pNode=stack;
	while(pNode!=NULL) {
		if(x==pNode->data) return true;
		pNode=pNode->pLink;
	}
	return false;
}
//Ham lay cac doi tuong ra khoi stack cho den khi rong
void DelPop(Stack &stack) {
	while(stack!=NULL) {
		pop(stack);
	}
}
int main() {
	Stack stack;
	StackInit(stack);
//1.Kiem tra ngan xep rong hay khong
	cout<<"Stack dang rong?";
	cout<<(StackIsEmpty(stack)?"Yes":"No");
//2.Them cac doi tuong vao stack
	push(stack,1);
	push(stack,2);
	push(stack,3);
//3.In ra cac doi tuong
	cout<<"\nSTACK:";
	PrintStack(stack);
//4.Nhap x kiem tra xem x co trong stack hay khong
	int x;
	cout<<"\nNhap x:";
	cin>>x;
	int a=FindStack(stack,x);
	if(a==1)cout<<"X co trong Stack";
	else cout<<"X khong co trong Stack";
//5.Lay cac doi tuong ra khoi ngan xep cho toi khi rong
	DelPop(stack);
//6.Kiem tra stack da rong hay chua
	cout<<"\nStack da rong?";
	cout<<(StackIsEmpty(stack)?"Yes":"No");
	return 0;
}

