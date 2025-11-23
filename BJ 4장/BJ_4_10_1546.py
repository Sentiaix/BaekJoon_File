# https://www.acmicpc.net/problem/1546

n = int(input())

num = list(map(float, input().split()))
m = max(num)

sum = 0.0
for i in range(n):
    sum += float(num[i]) / m * 100

print(sum/n)