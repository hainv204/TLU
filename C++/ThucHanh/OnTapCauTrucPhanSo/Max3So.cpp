#include <bits/stdc++.h>
using namespace std;
int main() {
   int a,b,c;
       cin>>a>>b>>c;
	if(a>b){
		if(a<c){//a=3,b=2,c=5
			cout<<c;
		}else if(c<b){//a=3,b=2,c=1
			cout<<a;
		}else cout<<a;//a=5,b=1,c=3-->a>b,a>c
	}else{
		if(a>c){//a=2,b=4,c=1
			cout<<b;
		}else if(b<c){//a=2,b=4,c=8
			cout<<c;
		}else{//a=2,b=4,c=3-->a<b,a<c
			cout<<b;
		}
	}
    return 0;
}

