#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//折半查找法，返回下标
int binarysearch(int a[], int target, int low, int high){
    if(high < low) return -1;
    int mid = (low+high)/2;
    if(a[mid] == target)
    return mid;
    if(a[mid] > target){
        high = mid -1 ;
        return binarysearch(a, target,low,high);
    }
    else if{
        low = mid + 1;
        return binarysearch(a, target,low,high);
    }
}

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
    L->length--;
}

bool Delete(List *L,i,int *e){
    *e = L->p[i-1];
    for(int j =i;j<L->length-1;j++){
        L->p[j-1] = L->p[j]; 
    }
    L->length --;
}

int Locate(List *L, int e){
    return binarysearch(L->p, e, 0, L->length-1);
}

int Get(List *L,int i){
    return L->p[i-1];
}

