# https://www.acmicpc.net/problem/10807

n = int(input())
num_list = list(map(int, input().split()))
# num_list = []
# for i in range(n):
#     num = int(input())
#     num_list.append(num)

src_num = int(input())
print(num_list.count(src_num))
