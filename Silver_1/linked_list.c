#include <stdio.h>
#include <stdlib.h>

struct NODE {
    struct NODE *next;
    int data;
};

int main(){

    struct NODE *head = malloc(sizeof(struct NODE)); // 머리 노드 생성

    struct NODE *node1 = malloc(sizeof(struct NODE)); // node 1 생성
    head -> next = node1;
    node1 -> data = 10;

    struct NODE *node2 = malloc(sizeof(struct NODE)); // node 2 생성
    node1 -> next = node2;
    node2 -> data = 20;

    node2 -> next = NULL; // node 2가 마지막 노드이므로 NULL을 넥스트로 넣어준다.


    struct NODE *curr = head -> next; // 링크드 리스트의 커서에 node 1 의 주소를 저장.
    
    while(curr != NULL){
        printf("%d - ", curr -> data); // 커서가 위치한 노드의 데이터를 출력
        curr = curr -> next; // 다음 노드로 커서를 옮김.
    }


    free(node1);
    free(node2);
    free(head);

    return 0;

}