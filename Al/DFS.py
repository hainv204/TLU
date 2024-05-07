graph = {
  'A' : ['B','C', 'D'],
  'B' : ['E', 'F'],
  'C' : ['G'],
  'D' : [],
  'E' : [],
  'F' : ['H'],
  'G' : ['I', 'J'],
  'H' : [],
  'I' : [],
  'J' : []
}

before = {
  'A' : '',
  'B' : '',
  'C' : '',
  'D' : '',
  'E' : '',
  'F' : '',
  'G' : '',
  'H' : '',
  'I' : '',
  'J' : ''
}
visited = []   
def dfs(visited, graph, start, end):
  if start == end:
    return True
  else:
    for neighbor in graph[start]:
      if neighbor not in visited:
        before[neighbor] = start
        if dfs(visited, graph, neighbor, end) == True:
          return True
  return False 
start = input('Nhập vào đỉnh bắt đầu: ')
end = input('Nhập vào điểm kết thúc: ')       
try:
  if dfs(visited, graph, start, end) == True:
    print('Duong di tu', end, 've', start, 'la: ', end='')
    while end !=start:
      print(end, '->', end = '')
      end = before[end]
    print(start)
  else:
    print('Khong co duong di tu', start, 'den', end)
except:
  print('Đỉnh', start, ' hoặc', end,'không có trong đồ thị.')

