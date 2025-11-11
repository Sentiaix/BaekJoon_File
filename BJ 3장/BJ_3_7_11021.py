# https://www.acmicpc.net/problem/11021

n = int(input(""))

for _ in range (1, n + 1):
    a, b = map(int, input().split())
    print(f"Case #{_}: {a+b}")