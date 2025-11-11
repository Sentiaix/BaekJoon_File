# https://www.acmicpc.net/problem/10950

n = int(input())

for i in range(n):
    a,b = map(int, input().split()) # input_list = [input() for _ in range(2)] 이것도 가능.
    print(a + b)