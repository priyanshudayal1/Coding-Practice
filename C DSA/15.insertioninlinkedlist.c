#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void displayLinkedlist(struct Node *ptr){
    while(ptr!=NULL){
        printf("\nElement = %d",ptr->data);
        ptr=ptr->next;
    }
}

int main(){

    struct Node *head=(struct Node *)(malloc(sizeof(struct Node)));
    struct Node *second=(struct Node *)(malloc(sizeof(struct Node)));
    head->data=100;
    head->next=second;
    second->data=200;
    second->next=NULL;
    //Insertion at the start
    struct Node *ptr=(struct Node *)(malloc(sizeof(struct Node)));
    ptr->data=1;
    ptr->next=head;
    displayLinkedlist(head);
    displayLinkedlist(ptr);
    return 0;
}
