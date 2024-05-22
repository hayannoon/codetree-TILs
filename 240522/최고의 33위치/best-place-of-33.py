def check_bound(row, col):
    global N
    if (row + 2) < N and (col + 2) < N:
        return True
    return False


def calculate(row,col):
    global li
    cnt = 0
    for i in range(row, row+3):
        for j in range(col, col+3):
            cnt +=  li[i][j]
    return cnt


if __name__ == "__main__":
    N = int(input())

    li = []
    maximum = 0
    for _ in range(N):
        li.append(list(map(int,input().split())))

    for i in range(N):
        for j in range(N):
            if check_bound(i,j):
                maximum = max(maximum, calculate(i,j))
    
    print(maximum)