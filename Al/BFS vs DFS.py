# graph là biểu diễn danh sách liền kề bằng dir
graph = {
        '1': ['2', '3', '4'],
        '2': ['5', '6'],
        '3': ['7'],
        '5': ['7'],
        }
def bfs(graph_to_seach, start, end):
    # tạo một hàng đợi của đường đi
    queue = []
    # đưa điểm đâu tiên vào trong hàng đợi
    queue.append(start)
    visit =[]
    visit.append(start)
    while queue:
        # lấy đường đi dầu tiên trong hàng đợi
        path = queue.pop(0)
        #print(path)
        # lấy vị trí cuối cùng trong đường đi
        node = path[-1]
        # xuất đương đi đã tìm thấy
        if node == end:
            return path
        # liệt kê các nút liền kề và tạo một đưỜng đi mới và thêm vào hàng đợi
        for adjacent in graph_to_seach.get(node,[]):
            if(adjacent not in visit):
                visit.append(adjacent)
                new_path = list(path)
                new_path.append(adjacent)
                queue.append(new_path)
def dfs(graph_to_seach, start, end):
    # tạo một ngăn xếp của đường đi
    stack = []
    visit =[]
    # đưa điểm đâu tiên vào trong ngăn xếp
    stack.append(start)
    visit.append(start)
    while stack:
        # lấy đường đi dầu tiên trong ngăn xếp
        path = stack.pop(0)
        # lấy vị trí cuối cùng trong đường đi
        node = path[-1]
        # xuất đương đi đã tìm thấy
        if node == end:
            return path
        # liệt kê các nút liền kề và tạo một đưỜng đi mới và thêm vào ngăn xếp
        stack_check = []
        for adjacent in reversed(graph_to_seach.get(node,[])):
            if(adjacent not in visit):
                visit.append(adjacent)
                new_path = list(path)
                new_path.append(adjacent)
                stack.insert(0,new_path)
a=int(input('Nhap lua chon:'))
if(a==1):
    print(bfs(graph, '1', '7'))
if(a==2):
    print(dfs(graph, '1', '7'))
