# https://www.acmicpc.net/problem/3052

rounds = [] # 나머지 저장

for i in range(10):
    n = int(input())
    r = n % 42
    if r in rounds:
        pass
    else :
        rounds.append(r)

print(len(rounds))