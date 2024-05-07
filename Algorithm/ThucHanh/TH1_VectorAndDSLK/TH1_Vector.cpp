#include<bits/stdc++.h>
using namespace std;
typedef int T;
//Cau truc struct
struct Vector{
	int size;
	int capacity;
	T *arr;
};
//Ham khoi tao
void vecInit(Vector &vec,int initcapacity=16){
	vec.size=0;
	vec.capacity= initcapacity;
	vec.arr=new T[vec.capacity];
}
//Ham vecExpand dinh nghia ham mo rong dung luong bo nho
//newcapacity la dung luong moi
void vecExpand(Vector &vec,int newcapacity){
	if(newcapacity<=vec.size) return;
	T *old=vec.arr;
	vec.arr= new T[newcapacity];
	for(int i=0;i<vec.size;i++){
		vec.arr[i]=old[i];
	}
	delete[]old;
	vec.capacity=newcapacity;
}
//Chen phan tu vao vector
//newElement la phan tu moi can chen
void vecPushBack(Vector &vec,T newElement){
	if(vec.size==vec.capacity){
		vecExpand(vec,2 *vec.capacity);
	}
	vec.arr[vec.size]=newElement;
	vec.size++;
}
//2.Cat bo dung luong
void Delvec(Vector &vec){
	T *old=vec.arr;
	vec.arr=new T[vec.size];
	for(int i=0;i<vec.size;i++){
		vec.arr[i]=old[i];
	}
	delete[] old;
	vec.capacity=vec.size;
}
//3.In dung luong vector
void PrintVec(Vector & vec) {
    for (int i = 0; i < vec.size; i++) {
        cout<< " " << vec.arr[i] ;
    }
}
//4.Tim kiem tuan tu
int LishSeach(Vector &vec, T x){
	for(int i=0;i<vec.size;i++){
		if (vec.arr[i]==x) return i;
	}
	return -1;
}
//5.Tim kiem nhi phan
void vecErase(Vector & vec, int pos) {
    for (int i = pos; i < vec.size - 1; i++)
        vec.arr[i] = vec.arr[i + 1];

    vec.size--;
}
void DeleteP1toP2(Vector & vec, int pos1, int pos2) {
    for (int i = pos2; i >= pos1; i--) {
        vecErase(vec,i);
    }
}
int main(){
Vector vec;
vecInit(vec);
//1.In ra dung luong vector
cout<<"1.Dung luong cua vector: "<<vec.capacity<<endl;
//3,In tat ca phan tu
vecPushBack(vec,1);
vecPushBack(vec,5);
vecPushBack(vec,11);
cout<<"In cac phan tu cua vector:";
PrintVec(vec);
//2.Cat bo dung luong du thua
cout<<"\n2.Cat bo phan du thua vector";
Delvec(vec);
cout<<"\nKich thuoc:"<<vec.size;
cout<<"\nDung luong moi: "<<vec.capacity;
//4.Tim kiem tuan tu
cout<<"\nTim kiem tuan tu: ";
T x;
cout<<"\nNhap phan tu can tim kiem: "; cin>>x;
int pos=LishSeach(vec,x);
if (pos == -1) cout<<"Khong tim thay phan tu can tim kiem";
    else cout<<"Tim thay phan tu can tim kiem tai vi tri: "<<pos;
//6.Xoa cac phan tu nam o vi tri tu pos1 den pos 2
cout<<"\nXoa cac phan tu tu pos1 den pos2:";
int pos1,pos2;
cout<<"\nNhap vi tri pos1:"; cin>>pos1;
cout<<"Nhap vi tri pos2:"; cin>>pos2;
DeleteP1toP2(vec,pos1,pos2);
cout<<"Cac phan tu sau khi xoa:";
PrintVec(vec);
return 0;
}

