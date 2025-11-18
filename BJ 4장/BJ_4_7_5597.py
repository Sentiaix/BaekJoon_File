# https://www.acmicpc.net/problem/5597

student = []

for i in range(1, 31):
    student.append(i)

# print(student)

for i in range(28):
    n = int(input())
    student.remove(n)

print(student[0])
print(student[1])