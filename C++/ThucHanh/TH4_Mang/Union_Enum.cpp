#include<bits/stdc++.h>
using namespace std;
enum HanhKiem{
	XuatSac,Tot,Kha,Tb,Yeu,Kem
};
enum HocLuc{
	xuatsac,gioi,kha,tb,yeu,kem
};
struct HocSinh{
	string hoten;
	int d,m,y;
	string gt;
	float dtb;
	HocLuc hl;
	 HanhKiem hanhkiem;
	 void DKXetHL(){
	 	if(dtb>9)
	 	hl=xuatsac;
	 	else if(dtb>8)
	 	hl=gioi;
	 	else if(dtb>7)
	 	hl=kha;
	 	else if(dtb>5.5)
	 	hl=tb;
	 	else if(dtb>4)
	 	hl=yeu;
	 	else
	 	hl=kem;
	 }
	 string XetHL(){
	 	switch(hl){
	 		case xuatsac:
	 			return "Hoc luc Xuat Sac";
	 		case gioi:
	 			return "Hoc luc Gioi";
	 		case kha:
	 			return "Hoc luc kha";
	 		case tb:
	 			return "Hoc luc Trung Binh";
	 		case yeu:
	 			return "Hoc luc Yeu";
	 		case kem:
	 			return "Hoc luc Kem";
		 }
	 }
	 string XetHK(){
	 	switch(hl){
	 		case XuatSac:
	 			return "Hanh kiem Xuat Sac";
	 		case Tot:
	 			return "Hanh kiem Tot";
	 		case Kha:
	 			return "Hanh kiem Kha";
	 		case Tb:
	 			return "Hanh kiem Trung Binh";
	 		case Yeu:
	 			return "Hanh kiem Yeu";
	 		case Kem:
	 			return "Hanh kiem Kem";
		 }
	 }
	 
};
struct Node{
	HocSinh hs;
	Node *next;
};
//Tao Node
Node *CreateNode(HocSinh hs){
	Node *pNode=new Node;
	pNode->hs=hs;
	pNode->next=NULL;
	return pNode;
}
void InsertLast(Node *&head,HocSinh hs){
	Node *pNode=CreateNode(hs);
	if(head==NULL)
	head=pNode;
	else{
		Node*pTmp=head;
		while(pTmp->next!=NULL){
			pTmp=pTmp->next;
		}
		pTmp->next=pNode;
	}
}
void PrintList(Node *head){
	Node*t=head;
	while(t!=NULL){
		cout<<t->hs.hoten<<"\t"<<t->hs.d<<"-"<<t->hs.m<<"-"<<t->hs.y<<"\t"<<t->hs.gt<<"\t"<<t->hs.dtb;
		cout<<"\t"<<t->hs.XetHL()<<"\t"<<t->hs.XetHK()<<endl;
	t=t->next;
	}
	
}
int main(){
Node *head=NULL;
HocSinh hs;
int n,dem=0;
cout<<"Nhap so luong hoc sinh: ";
cin>>n;
cin.ignore();
do{
	cout<<"Nhap thong tin hoc sinh: \n";
	cout<<"Nhap ten hoc sinh: ";
	getline(cin,hs.hoten);
	cout<<"Nhap ngay sinh: ";
	cin>>hs.d>>hs.m>>hs.y;
	cin.ignore();
	cout<<"Nhap gioi tinh: ";
	getline(cin,hs.gt);
	cout<<"Nhap diem trung binh: ";
	cin>>hs.dtb;
	cin.ignore();
	hs.DKXetHL();
	InsertLast(head,hs);
	dem++;
}while(dem<n);
//In danh sach
cout<<"\n---------------------------------DANH SACH HOC SINH---------------------------------\n";
PrintList(head);
return 0;
}

