s=input("S = ")
k=int(input("K = "))
for i in range(len(s)-2*k +1):
    if s[i:i+k]==s[i+k:i+2*k]:
        print("Chuoi lap bac {}".format(k))
        break
else:
    print("Chuoi khong lap")