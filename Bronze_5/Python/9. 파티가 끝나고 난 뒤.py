
LP = [int(x) for x in input().strip().split()] # from https://www.acmicpc.net/board/view/32535

L = LP[0]
P = LP[1]
num_participants = L * P

predict = [int(x) for x in input().strip().split()]

# diff = [0, 0, 0, 0, 0] #이렇게 말고 그냥 빈 배열을 선언하고 차곡차곡 넣는 방법은 없을까? ---> put이었나?

diff = []

for x in range(0, 5):
    diff.append(predict[x] - num_participants) #append 메서드로 해결!
    print(diff[x] , end = " ")



