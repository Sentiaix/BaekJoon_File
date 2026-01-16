# https://www.acmicpc.net/problem/2675

case = int(input()) # 입력받을 문자열 수

result = ""

for i in range(case):
    n, str = input().split()
    n = int(n)

    for char in str:
        result += char * n
    if i != case - 1:
        result += '\n'

print(result)