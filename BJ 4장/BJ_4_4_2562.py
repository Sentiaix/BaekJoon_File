# https://www.acmicpc.net/problem/2562

# n_list = list(map(int, input().split()))
n_list = []
for i in range(9):
    n_list.append(int(input()))

max_n = max(n_list)
print(max_n)
print(n_list.index(max_n) + 1)