#include <stdio.h>


void quick_sort(int *data, int start, int end){

    if(start >= end) return; // 길이가 1인 배열일 때

    int pivot = start;
    int i = pivot + 1; // 왼쪽 커서 설정
    int j = end; // 오른쪽 커서 설정
    int temp;

    while(i <= j){ // 포인터가 서로 엇갈릴 때까지 반복
        while(i <= end && data[i] <= data[pivot]) i++;
        while(j > start && data[j] >= data[pivot]) j--;

        if(i > j){ // 커서가 엇갈림 -> 피벗과 right를 스왑
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }

        else{ // left 와 right를 스왑
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }

    }

    // 분할계산
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);

}

int main(){
    
    int data[10] = {4, 1, 2, 3, 9, 7, 8, 6, 10, 5};
    
    quick_sort(data, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }
    
    printf("hello");

    return 0;
}