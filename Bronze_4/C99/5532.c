#include <stdio.h>
#include <stdlib.h>

int main(){

    int total_days, total_kor_pages, total_math_pages, daily_avail_kor_pages, daily_avail_math_pages;
    int days_consumed_kor, days_consumed_math, max_days;

    int *info;

    info = malloc(sizeof(int) * 5);

    for(int i = 0; i < 5; i++){
        scanf("%d", &info[i]);
    }

    // for(int i = 0; i < 5; i++){
    //     printf("%d ", info[i]);
    // }

    total_days = info[0];
    total_kor_pages = info[1];
    total_math_pages = info[2];
    daily_avail_kor_pages = info[3];
    daily_avail_math_pages = info[4];

    days_consumed_kor = (total_kor_pages % daily_avail_kor_pages == 0 ? total_kor_pages / daily_avail_kor_pages : total_kor_pages / daily_avail_kor_pages + 1);
    days_consumed_math = (total_math_pages % daily_avail_math_pages == 0 ? total_math_pages / daily_avail_math_pages : total_math_pages / daily_avail_math_pages + 1);

    max_days = (days_consumed_kor > days_consumed_math ? days_consumed_kor : days_consumed_math);

    // printf("\n\n%d %d %d\n\n", days_consumed_kor, days_consumed_math, max_days);

    printf("%d", total_days - max_days);

    return 0;
}