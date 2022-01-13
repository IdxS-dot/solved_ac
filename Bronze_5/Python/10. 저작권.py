
num_songs, num_avg_mel = input().split()    # 입력받은 값을 공백을 기준으로 분리

least_mel = int(num_songs) * (int(num_avg_mel) - 1) + 1

print(least_mel)
