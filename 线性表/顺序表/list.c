#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100

typedef struct SList{
    int *p;
    int length, capacity;
}List;

bool InitList(List *L){
    L->length = 0;
    L->p = (int *)malloc(MAXSIZE*sizeof(int));
    L->capacity = MAXSIZE;
    return 0;    
}

int Length(List *L){
    return L->length;
}

bool ifrealloc(List *L){
    if (L->length == L->capacity){
        int *data = (int*)realloc(L->p,2*capacity*sizeof(int));
        if (data == NULL){
            printf("%s","failed to realloc memory");
            return false;
        }
        L->p = data;
        return true;    
    }
}

bool Insert(List *L,int i, int e){
    for(int j = L->length-1;j>=i-1; j--){
        L->data[j+1] = L->data[j];
    }
    L->data[i-1] = e;
}