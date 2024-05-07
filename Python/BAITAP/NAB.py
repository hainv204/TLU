n=int(input("N = "))
a=int(input("A = "))
b=int(input("B = "))
s=0
for i in range(1,n+1):
    if i%a==0 or i%b==0:
        s+=i
print("Ket qua =",s)