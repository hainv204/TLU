#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = "; cin>>n;
if(n%400==0||(n%4==0&&n%100!=0)) cout<<n<<" la nam nhuan";
else cout<<n<<" khong phai nam nhuan";
return 0;
}

