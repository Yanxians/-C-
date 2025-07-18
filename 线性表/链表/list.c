#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct LinkList{
    int data;
    struct LinkList * next;
}Node,* Head;

void Init(Head *L){
    *L = (Node *)malloc(sizeof(Node));
    (*L) -> next = NULL;
}

int Locate(Head L, int e){
    int i = 0;
    while(p->next != NULL){
        i++;
        p = p->next;
        if(p->data == e) return i;
    }

    return -1;
}

Node* Get(Head L, int i){
    Head p = L;
    for(int j = 0; j<i && p != NULL; j++){
        p = p -> next;
    }

    return p;
}

bool Insert(Head L, int i, int e){
    Head p = L;
    int j;
    for(j = 0;j<i-1 && p != NULL;j++){
        p = p->next;
    }

    if(p == NULL ) return false;

    Node *tmp = (Node *)malloc(sizeof(Node));
    tmp->data = e;
    tmp->next = p->next;
    p->next = tmp;
    return true;
}

bool Delete(Head L,int i){
    Head p = L;
    int j;
    for(j = 0;j <i-1 && p != NULL){
        p = p->next;
        j++;
    }

    if(p == NULL || p->next = NULL) return false;

    Node *tmp = p->next; 
    p ->next = p->next->next;
    free(tmp);
    return true;
}

void HeadInit(Head *L){
    *L = (Node *)malloc(sizeof(Node));
    (*L) -> next = NULL;
    int num = 0;
    scanf("%d",&num);
    //输入-99999结束插入
    while(num != -99999){
        Node *tmp = (Node*)malloc(sizeof(Node));
        tmp -> data = num;
        tmp -> next = (*L)->next;
        (*L)->next = tmp;
        scanf("%d",&num)
    }
}

void TailInit(Head *L){
    *L = (Node *)malloc(sizeof(Node));
    (*L)->next = NULL;
    Node * tail = *L;
    int num = 0;
    scanf("%d",&num);
    while(num != -99999){
        Node *tmp = (Node *)malloc(sizeof(Node));
        tmp -> data = num;
        tail -> next = tmp;
        tail = tmp;
        scanf("%d",&num);
    }
    tail->next = NULL;
}

void length(Head L){
    Head p = L;
    int i =0;
    while(p->next != NULL){
        p = p->next;
        i++;
    }
    return i;
}i