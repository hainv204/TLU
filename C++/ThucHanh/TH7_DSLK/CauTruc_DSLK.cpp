#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv;
	string ten;
	int ns;
};
struct Node{
	SinhVien sv;
	Node *next;
};
 typedef Node*head;
Node*CreateNode(SinhVien sv){
	Node *pNode=new Node;
	if(pNode!=NULL){
		pNode->sv=sv;
		pNode->next=NULL;
	}
	return pNode;
}
void InsertLast(Node*&head,SinhVien sv){
	Node *pNode=CreateNode(sv);
	if(head==NULL) head=pNode;
	else{
		Node*tmp=head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=pNode;
	}
}
void InsertFirst(Node*&head,SinhVien sv){
	Node*pNode=CreateNode(sv);
	if(head==NULL) head=pNode;
	else{
			pNode->next=head;
			head=pNode;
		}
	}
void Print(Node*head){
	Node*tmp=head;
	cout<<"Hien thi danh sach:\n";
	while(tmp!=NULL){
		cout<<tmp->sv.msv<<"\t"<<tmp->sv.ten<<"\t"<<tmp->sv.ns<<endl;
		tmp=tmp->next;
	}
}
//void ThemSV(Node*&head,SinhVien sv){
//cout<<"Nhap MaSV: ";
//getline(cin,sv.msv);
//cout<<"Nhap ten: "; getline(cin,sv.ten);
//cout<<"Nam sinh: "; cin>>sv.ns;
//cin.ignore();
//InsertFirst(head,sv);
//}
int main(){
SinhVien sv;
Node*head=NULL;
int d=0;
do{
cout<<"Nhap MaSV: ";
getline(cin,sv.msv);
if(sv.msv=="\0") break;
cout<<"Nhap ten: "; getline(cin,sv.ten);
cout<<"Nam sinh: "; cin>>sv.ns;
cin.ignore();
InsertLast(head,sv);
}while(true);
Print(head);
cout<<"Them sinh vien x:\n";
cout<<"Nhap MaSV: ";
getline(cin,sv.msv);
cout<<"Nhap ten: "; getline(cin,sv.ten);
cout<<"Nam sinh: "; cin>>sv.ns;
cin.ignore();
InsertFirst(head,sv);
Print(head);
//ThemSV(head,sv);
return 0;
}

