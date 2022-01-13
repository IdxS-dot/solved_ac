
pin_original = [1, 1, 2, 2, 2, 8]
pin_found = [int(x) for x in input().strip().split()] # from https://www.acmicpc.net/board/view/32535

diff = []

for x in range(0, 6):
    diff.append(pin_original[x] - pin_found[x]) #append 메서드
    print(diff[x], end = " ")

