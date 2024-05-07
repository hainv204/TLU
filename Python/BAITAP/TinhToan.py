n=int(input("N = "))
s,t=0,0
for i in range(1,n+1):
    t+=i
    s+=i/t
print("F(%d) = %.6f"%(n,s))