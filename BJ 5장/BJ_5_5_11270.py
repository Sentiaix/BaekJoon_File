# https://www.acmicpc.net/problem/11720

n = int(input())

s = list(input().strip())
sum = 0

for i in range(n):
    sum += int(s[i])

print(sum)