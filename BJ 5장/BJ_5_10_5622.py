# https://www.acmicpc.net/problem/5622

dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
s = input()
time = 0

for char in s:
    for i in range(len(dial)):
        if char in dial[i]:
            time += i + 3 # ABC가 인덱스 0이므로 0 + 3 = 3초

print(time)