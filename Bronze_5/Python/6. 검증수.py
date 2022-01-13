
n0, n1, n2, n3, n4 = input().split()    # 입력받은 값을 공백을 기준으로 분리

n0 = int(n0)
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
n4 = int(n4)

sum = n0 ** 2 + n1 ** 2 + n2 ** 2 + n3 ** 2 + n4 ** 2

verinum = sum % 10

print(verinum)