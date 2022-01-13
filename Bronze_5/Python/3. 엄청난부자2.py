
money_total, popu = input().split()    # 입력받은 값을 공백을 기준으로 분리
 
money_per = int(money_total) // int(popu)
remain = int(money_total) % int(popu)

print(money_per)
print(remain)