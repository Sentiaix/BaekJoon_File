# https://www.acmicpc.net/problem/10952

while(1):
    a,b = map(int, input().split())
    if not(a or b): # a = 0, b = 0 > a or b is 0. not(0) is True
        break
    print(a + b)