
length = int(input())

div = length % 5

if div == 0:
    time = length // 5

else:
    time = length // 5 + 1

print(time)