n=input("Day so: ")
n=n.split(',')
l=[]
for i in n:
    value=int(i)
    l.append(value)
l.sort(reverse=True)
print(l)