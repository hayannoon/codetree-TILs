def is_happy_numbers(li, m):
    max_value = 0
    cur = 1
    prev = li[0]
    for i in range(1, len(li)):
        if li[i] == prev:
            cur += 1
            max_value = max(max_value, cur)
        else:
            cur = 1
        prev = li[i]
    return max_value >= m


n, m = map(int, input().split())

li = []
cnt = 0

for _ in range(n):
    li.append(list(map(int,input().split())))

for i in range(n):
    tmp = []
    for j in range(n):
        tmp.append(li[i][j])
    if is_happy_numbers(tmp, m):
        cnt += 1
    
for j in range(n):
    tmp = []
    for i in range(n):
        tmp.append(li[i][j])
    if is_happy_numbers(tmp,m):
        cnt += 1
        
print(cnt)