from math import *
n=int(input("N = "))
t,s=0,0
for i in range(1,n+1):
    t+=i
    s+=i/sqrt(t)
print("F(%d) = %.7f"%(n,s))