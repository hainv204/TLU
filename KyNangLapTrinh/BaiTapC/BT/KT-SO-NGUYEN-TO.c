#include<stdio.h>
#include<math.h>
/*
Chạy số n.tố đến căn n vì một số chia cho số lớn hơn căn của nó thì chắc chắn chia hết một số nhỏ hơn căn của nó => không là số nguyên tố
=>Kết luận: ta chỉ cần kiểm tra 1 số từ 2 đến căn n,nếu số cần kiểm tra không chia hết từ 2->căn n thì số đó là số nguyên tố
VD.Kiểm tra n=36 thì 36 chia hết cho một số lớn hơn 6(ví dụ 9) thì nó cx chia hết cho một số nhỏ hơn 6(ví dụ 4) => 36 không phải số nguyên tố
*/
int isPrime(int n){
	if(n<=1) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
int n;
scanf("%d",&n);
if(isPrime(n))
	printf("%d la so nguyen to",n);
else
	printf("%d khong phai la so nguyen to",n);
return 0;
}
