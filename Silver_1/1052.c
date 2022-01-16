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

    printf("Length of the linked list: %d\n", checkLength(head));

    pourBottles(head, head -> next, head -> next -> next);

    printf("Length of the linked list: %d\n", checkLength(head));


    // 제대로 생성되었는지 체크하는 용도

    // printf("print in function\n");

    for(NODE* p = head -> next; p != NULL; p = p -> next) // p = head가 아닌 head -> next인 이유는 head 부터 시작하면 head에 포함된 NULL값이 그대로 출력되기 떄문
        printf("%d -> ", p -> data);
    
    printf("NULL\n");


    while(1){

        numberofBottles = checkLength(head);

        if(numberofBottles <= target_len){ // 목표한 길이에 도달했다면....
            if(buyCount == 0){ // 물병 구매 없이 끝났다면
                printf("-1\n"); // -1 출력
                break;
            } 
            else{
                printf("%d\n", buyCount); // 구매한 물병의 수 출력
                break;
            }
        }

        else{ // 아직 목표한 길이에 도달하지 못했다면...
            int escapeFlag = 0;
            // 같은 data 값을 갖는 노드 두 개를 하나만 남기고 값을 두 배 하는 for 문
            for(NODE* outer_curr = head -> next; outer_curr -> next != NULL; outer_curr = outer_curr -> next){

                escapeFlag = 0;
                
                int tempData = outer_curr -> data;


                for(NODE* inner_curr = outer_curr; inner_curr != NULL; inner_curr = inner_curr -> next){
                    if(inner_curr -> next -> data == tempData){
                        pourBottles(head, outer_curr, inner_curr);
                        escapeFlag = 1;
                    }
                }
                
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
    
    for(NODE* p = head -> next; p != NULL; p = p -> next) // p = head가 아닌 head -> next인 이유는 head 부터 시작하면 head에 포함된 NULL값이 그대로 출력되기 떄문
        printf("%d -> ", p -> data);
    
    printf("NULL\n");

    return 0;
}



void createBottle(int init_len, NODE* head){
   
    for(int i = 0; i < init_len; i++){

        addBottle(head, 1);
    }

    // 제대로 생성되었는지 체크하는 용도

    // printf("print in function\n");

    // for(NODE* p = head -> next; p != NULL; p = p -> next) // p = head가 아닌 head -> next인 이유는 head 부터 시작하면 head에 포함된 NULL값이 그대로 출력되기 떄문
    //     printf("%d -> ", p -> data);
    
    // printf("NULL\n");

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