#include <stdio.h>

void quick_sort(int *data, int start, int end);

int main(){
    int data[3] = {0};
    scanf("%d %d %d", &data[0], &data[1], &data[2]);

    quick_sort(data, 0, 2);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", data[i]);
    }
    
}

void quick_sort(int *data, int start, int end){

    if(start >= end) return;

    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;

    while(i <= j){

        while(i <= end && data[i] <= data[pivot]) i++;
        while(j > start && data[j] >= data[pivot]) j--;

        if(i > j){
            temp = data[pivot];
            data[pivot] = data[j];
            data[j] = temp;
        }
        else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }  

    }

    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);

}