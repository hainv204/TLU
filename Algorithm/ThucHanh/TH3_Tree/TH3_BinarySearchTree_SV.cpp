#include<bits/stdc++.h>
using namespace std;
//Tao cau truc Node
struct TNode {
	int MSV;
	string name;
	TNode *pLeft;
	TNode *pRight;
};
//Tao cau truc cay
struct BTree {
	TNode *root;
};
//Ham khoi tao
void BTreeInit(BTree&tree) {
	tree.root=NULL;
}
//Ham kiem tra cay rong hay khong
bool BTreeIsEmpty(BTree&tree) {
	return tree.root==NULL;
}
//Tao Node
TNode *CreateNode(int maSV,string hoten) {
	TNode *pNode=new TNode;
	pNode->MSV=maSV;
	pNode->name=hoten;
	pNode->pLeft=pNode->pRight=NULL;
}
//Chen sinh vien vao cay
void InsertNodeSV(BTree&tree,int maSV,string hoten) {
	TNode *pNode=CreateNode(maSV,hoten);
	if(tree.root==NULL) {
		tree.root=pNode;
	} else {
		TNode*tmp=tree.root;
		TNode*parent=NULL;
		while(tmp!=NULL) {
			parent=tmp;
			if(tmp->MSV>pNode->MSV)
				tmp=tmp->pLeft;
			else
				tmp=tmp->pRight;
		}
		if(parent->MSV>pNode->MSV)
			parent->pLeft=pNode;
		else
			parent->pRight=pNode;
	}
}
/*Duyet cay*/
//Theo thu tu truoc NLR
void PreOrder_NLR(TNode *root) {
	if(root!=NULL) {
		cout<<root->name<<" MSV: "<<root->MSV<<endl;
		PreOrder_NLR(root->pLeft);
		PreOrder_NLR(root->pRight);
	}
}
//Theo thu tu sau LRN
void PostOrder_LRN(TNode *root) {
	if(root!=NULL) {
		PostOrder_LRN(root->pLeft);
		PostOrder_LRN(root->pRight);
		cout<<root->name<<" MSV: "<<root->MSV<<endl;
	}
}
//Duyet theo thu tu giua LNR
void InOrder_LNR(TNode *root) {
	if(root!=NULL) {
		InOrder_LNR(root->pLeft);
		cout<<root->name<<" MSV: "<<root->MSV<<endl;
		InOrder_LNR(root->pRight);
	}
}
//Tim kiem theo MSV
TNode *Search(TNode *root,int maSV) {
	if((root==NULL)||(root->MSV==maSV))
		return root;
	else if(maSV<root->MSV)
		Search(root->pLeft,maSV);
	else if(maSV>root->MSV)
		Search(root->pRight,maSV);
}
//Xoa rong cay
/*Truyen tham chieu de thay doi con tro goc sau khi xoa,neu khong truyen tham chieu thi no chi anh huong trong ham
khong anh huong gi den con tro goc cua cay ben ngoai ham,cac nut ben trong se khong duoc giai phong*/
void DelBTree(TNode *&root){
	if(root==NULL) return;//cay rong thi thoat
	
	DelBTree(root->pLeft);
	DelBTree(root->pRight);
	delete root;
	root=NULL;
}
int main() {
	BTree tree;
	BTreeInit(tree);
//1.Chen 7-8 sinh vien vao cay
	InsertNodeSV(tree,5,"Nguyen Van A");
	InsertNodeSV(tree,3,"Nguyen Van B");
	InsertNodeSV(tree,7,"Nguyen Van C");
	InsertNodeSV(tree,2,"Nguyen Van D");
	InsertNodeSV(tree,4,"Nguyen Van E");
	InsertNodeSV(tree,6,"Nguyen Van F");
	InsertNodeSV(tree,8,"Nguyen Van G");
	cout<<"Da chen xong"<<endl;
//2.Tim kiem sinh vien bang MSV
	int MSV;
	cout<<"\nNhap ma sinh vien muon tim: ";
	cin>>MSV;
	if(Search(tree.root,MSV)) {
		cout<<"Da tim thay sinh vien co MSV: "<<MSV;
		TNode *sv=Search(tree.root,MSV);
		cout<<"\nSinh vien co MSV "<<MSV<<": "<<sv->name<<endl;
	} else
		cout<<"Khong tim thay!"<<endl;
	/*3.Duyet cay theo thu tu truoc,giua,sau*/
//Duyet cay theo thu tu truoc
	cout<<"\nDuyet cay theo thu tu truoc:"<<endl;
	PreOrder_NLR(tree.root);
//Duyet theo thu tu giua
	cout<<"\nDuyet theo thu tu giua:"<<endl;
	InOrder_LNR(tree.root);
//Duyet cay theo thu tu sau
	cout<<"\nDuyet theo thu tu sau:"<<endl;
	PostOrder_LRN(tree.root);
	/*4.Dem nut,nut la va nut co du 2 con*/
//Dem nut

//Dem nut la

//Dem nut co du 2 con
	
//5.Xoa rong cay
DelBTree(tree.root);
//6.Kiem tra xem cay da rong hay chua
	cout<<"\nCay da rong?";
	cout<<(BTreeIsEmpty(tree)?"YES":"NO")<<endl;
	return 0;
}

