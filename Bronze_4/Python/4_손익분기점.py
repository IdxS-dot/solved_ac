
fixed_cost, variable_cost, price = map(int, input().split())

if variable_cost >= price:
    
    print(-1)

else:

    print(int(fixed_cost / (price - variable_cost)) + 1)



