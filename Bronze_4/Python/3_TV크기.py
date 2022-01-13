import math as m

size, height, width = map(int, input().split())

hypo = m.sqrt(height ** 2 + width ** 2)

ratio = size / hypo

real_height = m.floor(height * ratio)
real_width = m.floor(width * ratio)

print(real_height, real_width)

