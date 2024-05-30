def get_max_continue(sequence):
    max_length = 1
    current_length = 1
    for i in range(1, len(sequence)):
        if sequence[i] == sequence[i-1]:
            current_length += 1
            max_length = max(max_length, current_length)
        else:
            current_length = 1
    return max_length
            
if __name__ == "__main__":
    rows, min_sequence_length = map(int, input().split())

    matrix = [list(map(int,input().split())) for _ in range(rows)]
        
    count = 0

    for row in matrix:
        if get_max_continue(row) >= min_sequence_length:
            count += 1

    for column in zip(*matrix):
        if get_max_continue(column) >= min_sequence_length:
            count += 1
    
    print(count)