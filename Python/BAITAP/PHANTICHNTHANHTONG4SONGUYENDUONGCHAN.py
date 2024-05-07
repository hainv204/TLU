n=int(input("N = "))
#Ham dung tinh so cach phan tich n thanh tong 4 so ng.duong chan
def dem(n):
    return (n-4)//2 +1
d=0
for i in range(4,n//2 +1,2):
    d+=(dem(i)*dem(n-i))
    if i!=n//2:
        d+=(dem(i)*dem(n-i))
print('Co',d,'cach phan tich',n,'thanh tong 4 so nguyen duong chan')