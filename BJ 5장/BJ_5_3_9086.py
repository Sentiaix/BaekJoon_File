# https://www.acmicpc.net/problem/9086

'''
입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다.
각 테스트 케이스는 한 줄에 하나의 문자열이 주어진다.
문자열은 알파벳 A~Z 대문자로 이루어지며 알파벳 사이에 공백은
없으며 문자열의 길이는 1000보다 작다.
'''

n = int(input())

string = []
for i in range(n):
    s = list(input().strip())
    string.append(s)

for i in range(n):
    stchar = string[i][0]
    if n < 2 :
        print(stchar * 2)
    else :
        enchar = string[i][len(string[i]) - 1]
        print(stchar + enchar)