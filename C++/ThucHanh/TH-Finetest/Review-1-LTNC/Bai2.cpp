#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"N = ";cin>>n;
float a[n];
for(int i=0;i<n;i++){
	cout<<"a["<<i<<"] = ";cin>>a[i];
}
float min=a[0];
for(int i=0;i<n;i++){
	if(min>=a[i]) min=a[i];
}
cout<<"Gia tri nho nhat trong A: "<<min;
return 0;
}

