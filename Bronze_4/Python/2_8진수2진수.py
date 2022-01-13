
num = input()

oc = int('0o' + num, 8)

binary = bin(oc)
# print(type(binary))


print(binary[2:])

