from math import *

goc = int(input("Moi ban nhap vao goc:"))
sinx = sin(radians(goc))
cosx = cos(radians(goc))
tanx = tan(radians(goc))
cotanx = 1 / tanx
print("sin({0})={1}".format(goc, sinx))
print("cos({0})={1}".format(goc, cosx))
print("tan({0})={1}".format(goc, tanx))
print("cotan({0})={1}".format(goc, cotanx))
