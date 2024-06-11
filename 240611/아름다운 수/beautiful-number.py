n, k = 0, 4
answer = []

def print_list():
    for item in answer:
        print(item, end=' ')
    print()

def is_beautiful_number():
    i = 0
    while i < len(answer):
        count = 1
        while i + 1 < len(answer) and answer[i] == answer[i + 1]:
            i += 1
            count += 1
        if count != answer[i]:
            return False
        i += 1
    return True

def select(cur_num):
    global n
    if cur_num == n:
        if is_beautiful_number():
            print_list()
        return
    for i in range(1, k+1):
        answer.append(i)
        select(cur_num+1)
        answer.pop()

if __name__=="__main__":
    n = int(input())
    select(0)