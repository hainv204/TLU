from math import *
def area2(x1,x2,x3,y1,y2,y3):
    s=0.5*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))
    return s

x1,y1=0,1
x2,y2=0,5
x3,y3=6,2
print("Dien tich tam giac:",area2(x1,x2,x3,y1,y2,y3))
