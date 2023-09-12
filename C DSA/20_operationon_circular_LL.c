#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};

//Traversal
void display(struct node *head){
    struct node *ptr=head;
    while(ptr->next!=head){
        printf("\nELement: %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\nElement: %d",ptr->data);
}

//Inertion at begining 
struct node * insertAtBegining(struct node *head,int data){
    struct node *ptr=(struct node*)(malloc(sizeof(struct node)));
    ptr->next=head;
    ptr->data=data;
    struct node *p=head;
    while (p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    return ptr;
}


int main(){
    struct node *head=(struct node*)(malloc(sizeof(struct node)));
    struct node *sec=(struct node*)(malloc(sizeof(struct node)));
    struct node *third=(struct node*)(malloc(sizeof(struct node)));
    struct node *fourth=(struct node*)(malloc(sizeof(struct node)));
    //struct node *fifth=(struct node*)(malloc(sizeof(struct node)));
    head->data=4;
    head->next=sec;
    sec->data=3;
    sec->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=1;
    fourth->next=head;
    printf("\nThe list before insertion: "); 
    display(head);

    head=insertAtBegining(head,10);
    printf("\nThe circular linked list after the insertion at the beginning: ");
    display(head);
    return 0;
}