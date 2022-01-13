#include <stdio.h>
#include <stdlib.h>


// 배열 안에서 같은 원소의 수를 파악하는 함수
int getSameElemNum(int dice[], int *sameElem, int len){
    int cnt_max = 1;
    int cnt = 1;
    int elemFlag = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if(dice[i] == dice[j]) cnt++;
        }

        if(cnt_max < cnt){
            cnt_max = cnt;
            cnt = 1;
            elemFlag = dice[i];
        }
    }
    

    if(cnt_max >= 2){
        *sameElem = elemFlag;
    }

    return cnt_max;
}
// 배열 안에서 가장 큰 값을 찾아내는 함수
int getMaxElem(int dice[], int len){
    int maxElem = dice[0];

    for (int i = 0; i < len; i++)
    {
        if(maxElem < dice[i]){
            maxElem = dice[i];
        }
    }

    return maxElem;
}



int main(){

    int size = 3;
    int *dice = malloc(sizeof(int) * size);
    
    int sameElem = 0;

    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    int SameElemCnt = getSameElemNum(dice, &sameElem, size);
    int maxElem = getMaxElem(dice, size);

    switch(SameElemCnt){
        case 1:
            printf("%d", maxElem * 100);
            break;
        
        case 2:
            printf("%d", 1000 + sameElem*100);
            break;

        case 3:
            printf("%d", 10000 + sameElem * 1000);

    }


    free(dice);

    return 0;
}