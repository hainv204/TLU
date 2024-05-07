#include<iostream>
using namespace std;
void XoaPhanTu(int arr[],int &n,int index){
	for(int i=index;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
int main(){
int n;
cout<<"So nguoi ngoi quanh ban: ";
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
	arr[i]=i+1;
}
int index=0;
while(n>1){
	index=(index+2)%n;
	XoaPhanTu(arr,n,index);
}
cout<<"Nguoi o lai cuoi cung la nguoi thu "<<arr[0];
delete []arr;
return 0;
}

