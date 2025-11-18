# https://www.acmicpc.net/problem/10811

m, n = map(int, input().split()) # m: 바구니 수, n: 입력받을 Case 수

baskets = []

for i in range(m):
    baskets.append(i+1)

# print(baskets) #debug print

#-- change baskets --#
for _ in range(n):
    st, en = map(int, input().split())
    st -= 1 # 직관성
    en += 1 # 직관성
    baskets[st:en] = reversed(baskets[st:en])
    # print(baskets) #debug print



#-- print list --#
for i in range(m):
    print(baskets[i], end=' ')