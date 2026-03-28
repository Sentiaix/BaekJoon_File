# https://www.acmicpc.net/problem/1436

'''
받는 문자열에 '666'만 있으면 되므로, 가능한 수는
666, 1666, 2666, ... , 6660, 6661 등 이다.
'''

number = int(input().strip())
current_num = 666 # 현재 저장된 666수
count = 0         # 666수가 몇 번째 666수인지 저장

while True:
    if '666' in str(current_num):
        count += 1

    if count == number:
        print(current_num)
        break

    current_num += 1