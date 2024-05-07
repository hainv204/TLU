//vi du: 123abc1d->123+1=124
//123abcd10->123+10=133
#include<bits/stdc++.h>
using namespace std;
void Xuli(string s){
	int sum=0,ans=0;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])) sum=sum*10+s[i]-'0';
		//sum+=s[i]-'0'; tinh tong tung so cong lai trong xau
		//sum=sum*10+s[i]-'0': sum=0->sum=1->sum=1*10+2=12 tru di '0'la chuyen ki tu thanh so
		else {
			ans+=sum;
			sum=0;
		}
	}
	ans+=sum;//dam bao so cuoi cung duoc cong vao
	cout<<"Tong cac so trong xau: "<<ans;
}
int main(){
string s;
int sum=0;
cout<<"Nhap xau: ";getline(cin,s);
Xuli(s);
return 0;
}

