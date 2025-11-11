# https://www.acmicpc.net/problem/10871

n, x = map(int, input().split()) # n > num of integers
                                 # x > comp numb
num_list = list(map(int, input().split()))

for i in num_list :
    if i < x :
        print(i, end=" ")
