

total_time = 0
cnt = 0

while cnt < 4:

    time_input = int(input())

    total_time += time_input
    cnt += 1

minute = total_time // 60
seconds = total_time % 60

print("{}\n{}".format(minute, seconds))