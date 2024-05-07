def nab(n,a,b):
    sl1=n//a
    sl2=n//b
    sl3=n//(a*b)
    
    ta=a*sl1*(sl1+1)//2
    tb=b*sl2*(sl2+1)//2
    tab=a*b*sl3*(sl3+1)//2
    tong=ta+tb-2*tab
    return tong

n=int(input("N = "))
a=int(input("A = "))
b=int(input("B = "))
print("Ket qua =",nab(n, a, b))