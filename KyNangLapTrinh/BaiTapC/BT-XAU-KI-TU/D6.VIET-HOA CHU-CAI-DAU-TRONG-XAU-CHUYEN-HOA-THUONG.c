#include<stdio.h>
#include<string.h>
#include<ctype.h>

// CHUYEN DOI VIET HOA CHU CAI DAU TIEN TRONG XAU
	void chuyendoi(char x[]){
		int i;
		// x[0]-->viet hoa
		//x[i-1]-->viet hoa
		//32:space -sd bang ma ASSII
		for(i=0;i<strlen(x);i++){
			if((i==0) || (i>0 && x[i-1]==32)){
				if(x[i]>=97 && x[i]<=122)
				x[i]=x[i]-32;
//CHUYEN DOI SANG VIET THUONG NHUNG CHU CAI BEN TRONG
			}else{
					if(x[i]>=65 && x[i]<=90)
					x[i]=x[i]+32;
			}
		}
	}
// XUAT RA XAU BAN DAU VA XAU SAU KHI NHAP
	int main(){
		int i,d=0;
		char s[50];
		printf("Nhap xau: "); gets(s);
		printf("Xau ban dau: %s",s);
		chuyendoi(s);
		printf("\nXau sau: %s",s);
//CHUYEN HOA-THUONG
printf("\nHoa sang thuong: %s",strlwr(s));
printf("\nThuong sang Hoa: %s",strupr(s));
return 0;
}

