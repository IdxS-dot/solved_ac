#include <stdio.h>

int main(){

    int hour , min , time = 0;
    int exp_hour, exp_min = 0;

    scanf("%d %d", &hour, &min); // 시간과 분 설정
    scanf("%d", &time); // 소요시간 설정

    exp_hour = hour + time/60; // 24시간이 넘어가면?
    time %= 60;
    exp_min = min + time%60; // 60분이 넘어가면?

    if(exp_min >= 60){
        exp_min %= 60;
        exp_hour++;
    }

    if(exp_hour >= 24) exp_hour %= 24;

    printf("%d %d\n", exp_hour, exp_min);

    return 0;
}