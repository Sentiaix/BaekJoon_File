# https://www.acmicpc.net/problem/10809

str = input()

# a: 97, z: 122
for i in range(ord('a'), ord('z') + 1):
    # chr(): 아스키 코드 >> 문자
    # ord(): 문자 >> 아스키 코드
    # .find() 문자의 첫 등장 인덱스 반환, 없으면 -1 반환
    print(str.find(chr(i)), end=' ')