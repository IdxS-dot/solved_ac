#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    struct _node *next;
    int data;
}NODE;

NODE* createBottle(int init_len, NODE* head); // init_len의 길이만큼 1의 val을 가지는 linked list를 생성하는 함수
NODE* addBottle(NODE* head); // 기존의 linked list에 1의 val을 가지는 node를 추가로 붙이는 함수

int main(){

    NODE *head = (NODE*)malloc(sizeof(NODE));
    head -> next = NULL;

    int init_len, target_len; // 첫 줄에 입력으로 주어지는 두 수

    scanf("%d %d", &init_len, &target_len);

    head = createBottle(init_len, head);

   


}



NODE* createBottle(int init_len, NODE* head){
   
    for(int i = 0; i < init_len; i++){

        head = addBottle(head);
    }

    // 제대로 생성되었는지 체크하는 용도

    // printf("print in function\n");

    // for(NODE* p = head -> next; p != NULL; p = p -> next) // p = head가 아닌 head -> next인 이유는 head 부터 시작하면 head에 포함된 NULL값이 그대로 출력되기 떄문
    //     printf("%d -> ", p -> data);
    
    // printf("NULL\n");


    return head;
}

NODE* addBottle(NODE* head){ // 링크드 리스트의 맨 앞에 1을 val로 갖는 노드를 삽입

    NODE* bottle = (NODE*)malloc(sizeof(NODE));
    bottle -> data = 1;
    bottle -> next = head -> next;
    head -> next = bottle;

    return head;
}