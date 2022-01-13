#include <stdio.h>

int main(){

    int hour , min , sec, time = 0;
    int exp_hour, exp_min, exp_sec = 0;

    scanf("%d %d %d", &hour, &min, &sec); // 시간 분 초 설정
    scanf("%d", &time); // 소요시간 설정

    exp_hour = hour + time/3600; // 24시간이 넘어가면?
    time %= 3600; // 시간을 더하고 남은 시간을 전달
    exp_min = min + time/60; // 60분이 넘어가면?
    time %= 60; // 분을 더하고 남은 시간을 전달
    exp_sec = sec + time%60; // 60초가 넘어가면?

    if(exp_sec >= 60){
        exp_sec %= 60;
        exp_min++;
    }

    if(exp_min >= 60){
        exp_min %= 60;
        exp_hour++;
    }

    if(exp_hour >= 24) exp_hour %= 24;

    printf("%d %d %d\n", exp_hour, exp_min, exp_sec);



    return 0;
}