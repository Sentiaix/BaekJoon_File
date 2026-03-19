# https://www.acmicpc.net/problem/1018

'''
0. 8x8사이즈로 시작점 잡고 전체 검색
1. (i,j)로 시작점 잡고 범위 설정
2. 각 시작점마다 옳은 좌표에 W,B가 있는지 탐색
3. 각 좌표의 합이 홀수/짝수에 따라 시작점과 색을 일정히 공유함을 이용.
>> W시작: (0,0) (1,1) (2,0) 모두 W
4. 오배치율이 가장 적은 보드 선택
5. 출력
'''

n, m = map(int, input().split())
# print(x,y)

board = [input() for _ in range(n)] # n개 받으면 배열로 저장하고 다음배열에 받음

ans = 64 # 8x8이 모두 틀린 경우


for i in range(n-7):        # 시작 포인트 설정
    for j in range(m-7):
        cntW = 0
        cntB = 0


        for x in range(8):  # 8x8 범위탐색 + for range(a) 는 0부터 a-1까지 탐색
            for y in range(8):
                cur = board[i + x][j + y] # 현재 탐색중인 칸

                # (i,j) 시작색에 따른 분별
                if (x + y) % 2 == 0:
                    if cur != 'W':
                        cntW += 1
                    if cur != 'B':
                        cntB += 1
                else:
                    if cur != 'B':
                        cntW += 1
                    if cur != 'W':
                        cntB += 1

        ans = min(ans, cntW, cntB)

print(ans)