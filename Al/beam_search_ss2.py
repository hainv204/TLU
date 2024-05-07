graph = {
        'A': ['C','D','E'],
        'D': ['F','I'],
        'E': ['G','K'],
        'I': ['B','G'],
        'G': ['B','H'],
        }
heuristic = {
        'A': 20,
        'C': 15,
        'D': 6,
        'E': 7,
        'F': 10,
        'I': 8,
        'G': 5,
        'K': 12,
        'B': 0,
        'H': 3,
            }
def beam_search(graph_to_seach, start, end, k):
    stack = []      #tạo mảng
    stack.append(start)         
    while stack:
        check=0                  
        path=[]
        for i in range(0,len(stack)):
            save = stack.pop(0)
            path.append(save)
        # lấy vị trí cuối cùng trong đường đi
        node = []
        save=''
        for i in range(0,len(path)):
            save = path[i][-1]
            node.append(save)
        # xuất đương đi đã tìm thấy
        for i in range(0,len(path)):        #kiểm tra lại xem đã gặp điểm end chưa
            if node[i] == end:
                check=check+1
                print(path[i])
        if(check!=0):
            return 0
        adjacent=[]
        check_adjacent=[]
        for i in range(0,len(path)):
            for j in graph_to_seach.get(node[i],[]):
                new_path=list(path[i])
                new_path.append(j)
                check_adjacent.append(new_path)
                #print(check_adjacent)
        for i in range(0,len(check_adjacent)-1):
            for j in range(i+1,len(check_adjacent)):
                if(heuristic[check_adjacent[i][-1]] > heuristic[check_adjacent[j][-1]] ):          #sắp xếp theo thứ tự giảm dần
                    a=check_adjacent[i]
                    check_adjacent[i]=check_adjacent[j]
                    check_adjacent[j]=a
        if len(check_adjacent)<k:                               #lấy k dữ liệu nhỏ nhất nếu không đủ k dữ liệu thì lấy hết
            for i in range(0,len(check_adjacent)):
                stack.append(check_adjacent[i])
        else:
            for i in range(0,k):
                stack.append(check_adjacent[i])
beam_search(graph,'A','B', 2)