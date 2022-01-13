#include <stdio.h>

int main(){

    int cutting_num;
    int slice_num;

    scanf("%d", &cutting_num);

    for (int i = 1; i <= 50; i++)
    {
        if(cutting_num == 2*i - 1){
            slice_num = i*(i + 1);
            break;
        }
        else if(cutting_num == 2*i){
            slice_num = (i + 1)*(i + 1);
            break;
        }
    }
    
    printf("%d\n", slice_num);


    return 0;
}