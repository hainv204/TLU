#include<bits/stdc++.h>
using namespace std;
int main(){
	int sole;//khai bao bien chua so le
	//khai bao bien kieu ifstream de doc file"sole.txt"
	ifstream inputFile("sole.txt");
	if(inputFile.is_open()){//kt xem file duoc mo hay khong
	//neu mo duoc thi thuc hien cong viec
		cout<<"Cac so le trong file la: "<<endl;
		while(!inputFile.eof()){
			//neu con tro chua den cuoi file thi tiep tuc thuc hien
			inputFile>>sole;//doc du lieu file ra bien sole
			cout<<sole<<"\t";//ghi du lieu vua doc duoc ra man hinh
		}
		inputFile.close();//dong file sau khi su dung
	}
	return 0;
}
