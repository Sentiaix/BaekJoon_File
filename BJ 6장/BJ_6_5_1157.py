# https://www.acmicpc.net/problem/1157

def mostUsedAlpha(s):
    mostUsedWord = ''
    maxAppear = -1 # 0개로 하면 오류 발생함
    secAppear = -1 # 2번째로 가장 많이 등장한 수치

    s = s.upper() # 다 대문자로 바꿈

    for char in range(ord('A'), ord('Z') + 1):
        wCount = s.count(chr(char))
        if wCount >= maxAppear:
            secAppear = maxAppear
            maxAppear = wCount
            mostUsedWord = chr(char)

    if secAppear == maxAppear:
        return '?'
    else:
        return mostUsedWord

s = input()

print(mostUsedAlpha(s))