#include<stdio.h>
#include<stdlib.h>

 typedef struct Node
{
    int data;
    struct Node *next;
    /* data */
}n;

void linkedlistTraversal(struct Node *ptr ){
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}


int main(){
    n *head;
    //Dynamic memory allocation in HEAP
    head=(n*)malloc((sizeof(n)));
    n *second=(n*)malloc((sizeof(n)));
    n *third=(n*)malloc((sizeof(n))); 
    (*head).data=7;
    head->next=second;
    second->data=10;
    second->next=third;
    third->data=300;
    third->next=NULL;
    linkedlistTraversal(head);
    return 0;
}