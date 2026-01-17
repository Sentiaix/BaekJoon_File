# https://www.acmicpc.net/problem/2941
# č >> c= / ć >> c- / dž >> dz= / đ >> d- / lj >> lj / nj >> nj / š >> s= / ž >> z= 로 변경하여 입력됨.

s = input().strip()
croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for char in croatia:
    s = s.replace(char, '*')

croatiaWords = len(s)

print(croatiaWords)