def get_max_continue(li):
    max_val = 1
    cur_val = 1
    for i in range(1, len(li)):
        if li[i] == li[i-1]:
            cur_val += 1
            max_val = max(max_val, cur_val)
        else:
            cur_val = 1
    return max_val
            
if __name__ == "__main__":
    n, m = map(int, input().split())

    li = []
    for _ in range(n):
        li.append(list(map(int,input().split())))
        
    cnt = 0

    for i in range(n):
        tmp = []
        for j in range(n):
            tmp.append(li[i][j])
        if get_max_continue(tmp) >= m:
            cnt+=1
            
    for i in range(n):
        tmp = []
        for j in range(n):
            tmp.append(li[j][i])
        if get_max_continue(tmp) >= m:
            cnt += 1
    
    print(cnt)