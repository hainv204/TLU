
#khởi tạo giá trị kề
next_to = {
    'A':['B','C', 'E', 'D'],
    'B':['G'],
    'C':['E', 'G'],
    'E':['I'],
    'D':['I','F'],
    'G':['H'],
    'H':['E','Z'],
    'I':['H', 'Z'],
}
#khởi tạo giá trị chiều dài đường đi từ key đến value tương ứng trong next_to g(u)
cost = {
    'A':[9,7,13,20],
    'B':[6],
    'C':[4, 9],
    'E':[3],
    'D':[6,4],
    'G':[5],
    'H':[4,6],
    'I':[9, 5],
}
#khởi tạo giá trị đỉnh (heuristic) h(u)
h = {
    'A':14,
    'B':15,
    'C':6,
    'E':8,
    'D':7,
    'G':10,
    'H':2,
    'I':4,
    'Z':0
}
#khởi tạo khoảng cách từ đỉnh bắt đầu tới đỉnh đó
g = {
    'A':0,
    'B':0,
    'C':0,
    'E':0,
    'D':0,
    'G':0,
    'H':0,
    'I':0,
    'Z':0,
}
#khởi tạo đỉnh trc đó chưa có đỉnh nào
before = {
    'A':'',
    'B':'',
    'C':'',
    'E':'',
    'D':'',
    'G':'',
    'H':'',
    'I':'',
}

#tính f
def f(v):
    return g[v] + h[v]
#tham số cho hàm sort
def myFunc(v):
  return f(v)
#ds các đỉnh cần xét
open = []
#ds các đỉnh đã được xét
close = []
search = False
#thuật toán A*
def AStar(start, end):
    open.append(start)#thêm start vào open
    while open!={}:
        open.sort(key=myFunc)#sắp xếp theo tăng dần của f
        s = open[0]#lấy ra pt đầu tiên
        open.pop(0)# xóa pt khỏi ds
        close.append(s)#thêm s vào close
        if s == end:
            search = True#tìm thấy đường đi
            break
        for i in range(len(next_to[s])):#i ở trong độ dài của danh sách mà kề đỉnh s
            v = next_to[s][i]#gán gtri đỉnh kề thứ i của s trong ds next_to[s]
            if v not in open and v not in close:
                open.append(v)
                before[v] = s
                g[v] = g[s] +  cost[s][i]#khoảng cách từ s đến v
            elif v in open and v not in close:
                g_new = g[s] + cost[s][i]
                if g_new<g[v]:
                    g[v]=g_new
                    before[v]=s
    if search == True:
        cp=g[end]
        print('Đường đi từ', end, 'về', start, 'là: ', end='')

        while end != start:
            print(end, '->', end='')
            end = before[end]
        print(start)
        
        print('Chi phí: ', cp)
#================main=================
start=input('Nhập đỉnh bắt đầu: ')
end=input('Nhập đỉnh kết thúc: ')
AStar(start,end)
