#khởi tạo giá trị kề
next_to = {
    'Arad' : ['Zerind', 'Sibiu', 'Timisoara'],
    'Bucharest': ['Giurgiu', 'Pitesti', 'Faragas', 'Urziceni'],
    'Craiova' : ['Dobreta', 'Rimnicu Vilcea', 'Pitesti'],
    'Dobreta' : ['Mehadia', 'Craiova'],
    'Eforie' : ['Hirsova'],
    'Faragas' : ['Sibiu', 'Bucharest'],
    'Giurgiu': ['Bucharest'],
    'Hirsova' : ['Eforie', 'Urziceni'],
    'Iasi' : ['Neamt', 'Vaslui'],
    'Lugoj' : ['Timisoara', 'Mehadia'],
    'Mehadia' : ['Lugoj', 'Dobreta'],
    'Neamt' : ['Iasi'],
    'Oradea' : ['Zerind', 'Sibiu'],
    'Pitesti': ['Rimnicu Vilcea', 'Craiova', 'Bucharest'],
    'Rimnicu Vilcea' : ['Sibiu', 'Craiova', 'Pitesti'],
    'Sibiu' : ['Oradea', 'Arad', 'Faragas', 'Rimnicu Vilcea'],
    'Timisoara' : ['Arad', 'Lugoj'],
    'Urziceni' : ['Bucharest', 'Vaslui', 'Hirsova'],
    'Vaslui' : ['Iasi', 'Urziceni'],
    'Zerind' : ['Oradea', 'Arad'],
}
#khởi tạo giá trị chiều dài đường đi từ key đến value tương ứng trong next_to
cost = {
    'Arad' : [75, 140, 118],
    'Bucharest': [90, 101, 211, 85],
    'Craiova' : [120, 146, 138],
    'Dobreta' : [75, 120],
    'Eforie' : [86],
    'Faragas': [99, 211],
    'Giurgiu': [90],
    'Hirsova' : [86, 98],
    'Iasi' : [87, 92],
    'Lugoj' : [111, 70],
    'Mehadia' : [70, 75],
    'Neamt' : [87],
    'Oradea' : [71, 151],
    'Pitesti': [97, 138, 101],
    'Rimnicu Vilcea' : [80, 146, 97],
    'Sibiu' : [151, 140, 99, 80],
    'Timisoara' : [118, 111],
    'Urziceni' : [85, 142, 98],
    'Vaslui' : [92, 142],
    'Zerind' : [71, 75]
}
#khởi tạo giá trị đỉnh (heuristic)
h = {
    'Arad' : 366,
    'Bucharest': 0,
    'Craiova' : 160,
    'Dobreta' : 242,
    'Eforie' : 161,
    'Faragas': 178,
    'Giurgiu': 77,
    'Hirsova' : 151,
    'Iasi' : 226,
    'Lugoj' : 244,
    'Mehadia' : 241,
    'Neamt' : 234,
    'Oradea' : 380,
    'Pitesti': 98,
    'Rimnicu Vilcea' : 193,
    'Sibiu' : 253,
    'Timisoara' : 329,
    'Urziceni' : 80,
    'Vaslui' : 199,
    'Zerind' : 374
}
#khởi tạo khoảng cách từ đỉnh bắt đầu tới đỉnh đó
g = {
    'Arad' : 0,
    'Bucharest': 0,
    'Craiova' : 0,
    'Dobreta' : 0,
    'Eforie' : 0,
    'Faragas': 0,
    'Giurgiu': 0,
    'Hirsova' : 0,
    'Iasi' : 0,
    'Lugoj' : 0,
    'Mehadia' : 0,
    'Neamt' : 0,
    'Oradea' : 0,
    'Pitesti': 0,
    'Rimnicu Vilcea' : 0,
    'Sibiu' : 0,
    'Timisoara' : 0,
    'Urziceni' : 0,
    'Vaslui' : 0,
    'Zerind' : 0
}
#khởi tạo đỉnh trc đó chưa có đỉnh nào
before = {
    'Arad' : '',
    'Bucharest': '',
    'Craiova' : '',
    'Dobreta' : '',
    'Eforie' : '',
    'Faragas': '',
    'Giurgiu': '',
    'Hirsova' : '',
    'Iasi' : '',
    'Lugoj' : '',
    'Mehadia' : '',
    'Neamt' : '',
    'Oradea' : '',
    'Pitesti': '',
    'Rimnicu Vilcea' : '',
    'Sibiu' : '',
    'Timisoara' : '',
    'Urziceni' : '',
    'Vaslui' : '',
    'Zerind' : ''
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
            v = next_to[s][i]#cập nhật độ dài từ start đến v qua s
            if v not in open and v not in close:
                open.append(v)
                before[v] = s
                g[v] = g[v] +  cost[s][i]#khoảng cách từ s đến v
    if search == True:
        print('Đường đi từ', end, 'về', start, 'là: ', end='')
        while end != start:
            print(end, '->', end='')
            end = before[end]
        print(start)
#================main=================
start=input('Nhập đỉnh bắt đầu: ')
end=input('Nhập đỉnh kết thúc: ')
AStar(start,end)
