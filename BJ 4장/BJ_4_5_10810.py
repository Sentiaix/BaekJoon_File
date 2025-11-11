# https://www.acmicpc.net/problem/10810
# 입력 : 첫 줄에 m(Case의 수)과 바구니의 갯수n 이 주어지고, 각 Case마다 i j k (공백구분)를 입력받는다.
# 출력 : 1번부터 n번 바구니까지 각 바구니에 든 공의 수를 출력한다.

# 입력 한 줄 마다 바뀜
i = 0 # 시작 바구니
j = 0 # 끝 바구니
k = 0 # 공의 번호

n, m = map(int, input().split()) # m: case 수, n: 바구니의 수

basket = [] # 바구니가 들어갈 list

for _ in range(n): # 빈 바구니 n개 생성
    basket.append(0)

for _ in range(m): # m번 반복
    i, j, k = map(int, input().split())
    for b in range(i-1, j): # i~j 바구니에 k개의 공 넣기
        basket[b] = k

for b in range(n):
    print(basket[b], end=' ')