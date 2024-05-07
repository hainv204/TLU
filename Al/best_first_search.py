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
def best_first_search(graph_to_seach, start, end):
        stack = []
    # đưa điểm đâu tiên vào trong mảng
        stack.append(start)
        while stack:
        # lấy đường đi dầu tiên trong mảng
                path = stack.pop(0)
        # lấy vị trí cuối cùng trong đường đi
                node = path[-1]
                print(node)
        # xuất đương đi đã tìm thấy
                if node == end:
                        return path
        # liệt kê các nút liền kề và tạo một đưỜng đi mới và thêm vào ngăn xếp
                for adjacent in graph_to_seach.get(node,[]):
                        new_path = list(path)
                        new_path.append(adjacent)
                        stack.append(new_path)
                for i in range(0,len(stack)-1):                 #sắp xếp tăng dần các dữ liệu trong mảng theo h(v)
                        for j in range(i+1,len(stack)):
                                if(heuristic[stack[i][-1]]>heuristic[stack[j][-1]]):
                                        a=stack[i]
                                        stack[i]=stack[j]
                                        stack[j]=a
print(best_first_search(graph,'A','H'))