#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    struct _node *next;
    int data;
}NODE;

void createBottle(int init_len, NODE* head); // init_len의 길이만큼 1의 val을 가지는 linked list를 생성하는 함수
void addBottle(NODE* head, int data); // 기존의 linked list에 1의 val을 가지는 node를 추가로 붙이는 함수
void pourBottles(NODE* head, NODE* start, NODE* target); // linked list의 start노드와 같은 값을 갖는 노드를 삭제하고 start 노드의 data는 두 배 하는 함수 
int checkLength(NODE* head); // head를 주었을 때 그 linked list의 길이를 반환해주는 함수

int main(){

    NODE *head = (NODE*)malloc(sizeof(NODE));
    head -> next = NULL;

    int init_len, target_len; // 첫 줄에 입력으로 주어지는 두 수
    int numberofBottles; // 현재 물병의 수
    int buyCount = 0; // 구매해야하는 물병의 수

    scanf("%d %d", &init_len, &target_len);

    createBottle(init_len, head);


    while(1){

        // loopCnt++;
        // printf("Loop Count: %d\n", loopCnt);
        numberofBottles = checkLength(head);

        if(numberofBottles <= target_len){ // 목표한 길이에 도달했다면....
            if(buyCount == 0){ // 물병 구매 없이 끝났다면
                printf("-1\n"); // -1 출력
                break;
            } 
            else{
                printf("Number of Bottles we bought: %d\n", buyCount); // 구매한 물병의 수 출력
                break;
            }
        }

        else{ // 아직 목표한 길이에 도달하지 못했다면...
            int escapeFlag = 0;

            // 2중으로 for문을 돌리면서 linked list 내에 같은 값을 갖는 두 노드가 존재하는지 체크하기
            for(NODE* outer_curr = head -> next; outer_curr -> next != NULL; outer_curr = outer_curr -> next){
                
                escapeFlag = 0;
                int tempData = outer_curr -> data;
                // printf("tempData = %d\n", tempData);
                // printf("escapeFlag: %d\n", escapeFlag);
                // 만약 tempData와 같은 값을 갖는 노드가 존재한다면 pourBottles 함수로 작업해준 후 while문 처음으로 돌아간다.
                for(NODE* inner_curr = outer_curr; inner_curr -> next != NULL; inner_curr = inner_curr -> next){

                    if(inner_curr -> next -> data == tempData){
                        // printf("Found same element: %d\n", tempData);
                        pourBottles(head, outer_curr, inner_curr);
                        escapeFlag = 1;
                        break;
                    }
               
                }
                
                // printf("hi\n");
                if(escapeFlag) break;
                
            }


            if(escapeFlag){
                continue;
            }
            else{
                addBottle(head, 1);
                buyCount++;
            }

        }


    }

    return 0;
}



void createBottle(int init_len, NODE* head){
   
    for(int i = 0; i < init_len; i++){

        addBottle(head, 1);
    }

}

void addBottle(NODE* head, int data){ // 링크드 리스트의 맨 앞에 1을 val로 갖는 노드를 삽입

    NODE* bottle = (NODE*)malloc(sizeof(NODE));
    bottle -> data = data;
    bottle -> next = head -> next;
    head -> next = bottle;

}

int checkLength(NODE* head){

    int length = 0;

    for(NODE* curr = head -> next; curr != NULL; curr = curr -> next){
        length++;
    }

    return length;
}


void pourBottles(NODE* head, NODE* start, NODE* target){
// 어차피 outer_curr 와 inner_curr로 start 노드와 target 노드가 특정되는데 굳이 다시 참조 for문을 돌릴 필요가 있을까?
// -> start 노드와 target노드를 처음부터 매개변수로 전달하자
    NODE* targetNode = target -> next;
    start -> data = (start -> data) * 2;
    target -> next = targetNode -> next;
    free(targetNode);

}