n = int(input("N = "))
List=[1]*n
a,b=0,0
for i in range(1,n):
    N2 = List[a] * 2 +1
    N3 = List[b] * 3 + 1
    List[i] = min(N2,N3)
    if List[i] == N2 :
        a +=1
    if List[i] == N3 :
        b+=1
print(f'{n} so dau tien cua N23:', *List)
