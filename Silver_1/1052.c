#include <stdio.h>
#include <stdlib.h>


NODE* createBottle(int init_len); // init_len의 길이만큼 1의 val을 가지는 linked list를 생성하는 함수
void addBottle(); // 기존의 linked list에 1의 val을 가지는 node를 추가로 붙이는 함수

typedef struct _node{
    struct _node *next;
    int data;
}NODE;

int main(){

    int init_len, target_len; // 첫 줄에 입력으로 주어지는 두 수

    scanf("%d %d", &init_len, &target_len);

    NODE* head = createBottle(init_len);

    NODE *curr = head -> next; // 링크드 리스트의 커서에 node 1 의 주소를 저장.
    
    while(curr != NULL){
        printf("%d - ", curr -> data); // 커서가 위치한 노드의 데이터를 출력
        curr = curr -> next; // 다음 노드로 커서를 옮김.
    }

}


NODE* createBottle(int init_len){

    NODE *head = NULL;
    NODE *tail = NULL;
    

    for(int i = 0; i < init_len; i++){

        NODE *newNode = malloc(sizeof(NODE));
        newNode -> data = 1;
        newNode -> next = NULL;

        if(head == NULL){
            head -> next = newNode;
        }

        else
            tail -> next = newNode;

        tail = newNode;
    }

    return head;
}