graph = {
        'A': ['B', 'C', 'D'],
        'B': ['E'],
        'C': ['E','F'],
        'E': ['G'],
        'F': ['G'],
        'G': ['H'],
        'D': ['H'],
        }
heuristic = {
        'A': 30,
        'B': 20,
        'C': 10,
        'D': 25,
        'E': 13,
        'F': 15,
        'G': 18,
        'H': 0,
            }
def Hill_Climbing(graph_to_seach, start, end):
    # tạo một mảng của đường đi
    stack = []
    # đưa điểm đâu tiên vào trong ngăn xếp
    stack.append(start)
    while stack:
        # lấy đường đi dầu tiên trong ngăn xếp
        path = stack.pop(0)
        # lấy vị trí cuối cùng trong đường đi
        node = path[-1]
        print(node)
        # xuất đương đi đã tìm thấy
        if node == end:
            return path
        adjacent=graph_to_seach.get(node,[])
        for i in range(0,len(adjacent)-1):
            for j in range(i+1,len(adjacent)):
                if(heuristic[adjacent[i]]<heuristic[adjacent[j]]):      #sắp xếp các cây con theo thứ tự tăng dần để đưa vào mảng thành giảm dần
                    a=adjacent[i]
                    adjacent[i]=adjacent[j]
                    adjacent[j]=a
        for adjacent1 in adjacent:
            new_path = list(path)
            new_path.append(adjacent1)
            stack.insert(0,new_path)
print(Hill_Climbing(graph,'A','H'))