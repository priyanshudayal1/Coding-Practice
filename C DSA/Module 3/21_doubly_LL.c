#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void display(struct node *head){
    struct node *ptr=head;
    do {
        printf("\nElement: %d",ptr->data);
        ptr=ptr->next;
    }while (ptr->next!=NULL);
    printf("\nElement: %d",ptr->data);

}

int main(){
    struct node *n1=(struct node *)(malloc(sizeof(struct node)));
    struct node *n2=(struct node *)(malloc(sizeof(struct node)));
    struct node *n3=(struct node *)(malloc(sizeof(struct node)));
    struct node *n4=(struct node *)(malloc(sizeof(struct node)));
    struct node *n5=(struct node *)(malloc(sizeof(struct node)));
    struct node *head=n1;
    n1->next=n2;
    n1->prev=NULL;
    n1->data=10;
    n2->next=n3;
    n2->prev=n1;
    n2->data=20;
    n3->next=n4;
    n3->prev=n2;
    n3->data=30;
    n4->next=n5;
    n4->prev=n3;
    n4->data=40;
    n5->data=50;
    n5->next=NULL;
    n5->prev=n4;
    
    printf("\nThe doubly linkded list is :");
    display(head);


    return 0;
}