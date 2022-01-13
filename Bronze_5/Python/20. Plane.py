

n1, k1, n2, k2 = map(int, input().split())    # 입력받은 값을 공백을 기준으로 분리, map을 쓰면 입력값을 int로 인식할 수 있다.

seats = n1 * k1 + n2 * k2

print(seats)