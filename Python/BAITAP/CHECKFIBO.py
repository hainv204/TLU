def isfib(n):
    if n==0: return 1
    p=5*n*n+4
    q=5*n*n-4
    a=int(p**0.5)
    b=int(q**0.5)
    return a*a==p or b*b==q
n=int(input('N = '))
if isfib(n):
    print('N la so fibonacci')
else:
    print('N khong phai la so fibonacci')