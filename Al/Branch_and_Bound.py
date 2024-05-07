graph = {                                   #tạo các cạnh kề và k(u,v)
        'A': {'C': 9,'D':7, 'E':13, 'F':20},
        'C': {'H':10},
        'D': {'E':4,'H':8},
        'E': {'K':4,'I':3},
        'K': {'B': 6},
        'H': {'K':5},
        'I': {'K':9,'B':5},
        'F': {'I':6,'G':4}
        }
heuristic = {                       #tạo h(v)
        'A': 14,
        'B': 0,
        'C': 15,
        'D': 6,
        'E': 8,
        'F': 7,
        'G': 12,
        'H': 10,
        'K': 2,
        'I': 4,
            }
def b_and_b(graph_to_seach, start, end,):
    min=10**100
    way=[]
    stack = []  # tạo một ngăn xếp của đường đi
    start_check=[[start],0,0]       #mảng thứ nhất là đường đi mảng thứ 2 là g() mảng thứ 3 là f()
    # đưa điểm đâu tiên vào trong ngăn xếp
    stack.append(start_check)
    while True:
        if len(stack)==0:    #nếu ngăn xếp mà rỗng đưa ra đường đi
            return way
        stack_check = []
        path = stack.pop(0) #lấy ngăn xếp đầu
        # lấy vị trí cuối cùng trong đường đi
        node = path[0][-1]
        print(node)
        if node == end:         
            if(path[2]<min):
                min=path[2]
                way=path[0]
                print(min)
                continue
            else:
                continue
        elif(path[2]>min):
            continue
        while True:
            for adjacent in graph_to_seach.get(node,{}):
                    new_path = list(path[0])
                    check_way = path[1]+ graph_to_seach[node][adjacent]         #tính g(v)
                    check_f = check_way + heuristic[adjacent]                   #tính f(v)
                    new_path.append(adjacent)
                    save_path = []
                    save_path.append(new_path)
                    save_path.append(check_way)
                    save_path.append(check_f)
                    stack_check.append(save_path)
            for i in range(0,len(stack_check)-1):
                for j in range (i+1,len(stack_check)):                          #sắp xếp giảm dần để khi đưa vào stack thành tăng dần
                    if(stack_check[i][2]<stack_check[j][2]):
                        a=stack_check[i]
                        stack_check[i]=stack_check[j]
                        stack_check[j]=a
                    elif(stack_check[i][2]==stack_check[j][2]):
                        if(stack_check[i][1]>stack_check[j][1]):
                            a=stack_check[i]
                            stack_check[i]=stack_check[j]
                            stack_check[j]=a
            for i in stack_check:
                stack.insert(0,i)
            break
print(b_and_b(graph,'A','H'))
            