# 배열을 이용해 한 줄 정수 입력을 받아 코드를 더 짧게 만들어 보았습니다.
sum = 0
num = [int(x) for x in input().strip().split()] # from https://www.acmicpc.net/board/view/32535

for x in num:
    sum += x ** 2

verinum = sum % 10
# print(sum)
print(verinum)