#include<stdio.h>
struct node{
    int data;
    struct Node* next;
};
struct  list
{
    struct Node* head;
    int size;
};

struct list* create_list(){
    struct list*list=malloc(sizeof(struct list ));
    list->head;
    list->size=0;
    return 0;
    
}