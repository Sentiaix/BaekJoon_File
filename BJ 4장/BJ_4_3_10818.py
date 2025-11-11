# https://www.acmicpc.net/problem/10818

n = int(input())

n_list = list(map(int, input().split()))
print(min(n_list), max(n_list))