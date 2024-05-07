s=input("Nhap S: ")
if not s.count('!'):
    s+='!!'
if s.count('!')%2==1:
    s+='!'
print('Chuoi S sau khi xu ly:',s)