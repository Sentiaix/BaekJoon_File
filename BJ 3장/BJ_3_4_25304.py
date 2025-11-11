# https://www.acmicpc.net/problem/25304

total_price = int(input(""))
num_stuff = int(input(""))
comp_price = 0

for i in range(num_stuff):
    a, b = map(int, input().split())
    comp_price += a * b

if comp_price == total_price :
    print("Yes")
else :
    print("No")