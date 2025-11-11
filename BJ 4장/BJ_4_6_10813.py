# https://www.acmicpc.net/problem/10813

def swap(a, b):
    temp = a
    a = b
    b = temp

    return a,b

n, m = map(int, input().split()) # n: 바구니 수 | m: swap 할 case 수

basket = [] # 빈 바구니

# 바구니 만들기
for i in range(n):
    basket.append(i + 1)

for i in range(m):
    a,b = map(int, input().split())
    basket[a-1], basket[b-1] = swap(basket[a - 1], basket[b - 1])

for i in range(n):
    print(basket[i], end=' ')