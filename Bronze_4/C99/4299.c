#include <stdio.h>

int main(){

    int add, sub, score1, score2;

    scanf("%d %d", &add, &sub);

    score1 = (add + sub) / 2;
    score2 = add - score1;

    if((add + sub) % 2 == 1 || score1 < 0 || score2 < 0){
        printf("-1");
    }
    else printf("%d %d", score1, score2);



    return 0;
}