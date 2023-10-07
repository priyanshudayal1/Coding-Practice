#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    /* data */
};

void display(struct node *ptr){
    while (ptr!=NULL){
        printf("\nElement : %d",ptr->data);
        ptr=ptr->next;
    }
}

//Insertion at begining
struct node* Insertatbegining(struct node *head,int data){
    struct node *ptr=(struct node *)(malloc(sizeof(struct node)));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

//Insertion at an index
struct node * insertAtindex(struct node *head,int data,int index){
    struct node *ptr=(struct node *)(malloc(sizeof(struct node)));
    struct node *p=head;
    int i=0;
    while (i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
}

//Insertion at the End
struct node * insertAtEnd(struct node *head,int data){
    struct node *ptr=(struct node *)(malloc(sizeof(struct node)));
    struct node *p=head;
    ptr->next=NULL;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    return head;
}

//Insertion after a node
struct node * insertAfterNode(struct node *head , struct node *prevnode,int data){
    struct node *ptr=(struct node *)(malloc(sizeof(struct node)));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}



//MAIN
int main(){
    struct node *head=(struct node *)(malloc(sizeof(struct node)));
    struct node *second=(struct node *)(malloc(sizeof(struct node)));
    struct node *third=(struct node *)(malloc(sizeof(struct node)));
    head->data=1;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=300;
    third->next=NULL;
    printf("\nBefore insertion the linked list : ");
    display(head);
    printf("\nAfter the insertion the linked list is : ");
    //Insert at begining
    head=Insertatbegining(head,10);
    display(head);
    //Insertion between index
    printf("\nAfter the insertion at an index");
    head=insertAtindex(head,56,3);
    display(head);
    //Insertion at the end
    head=insertAtEnd(head,77);
    display(head);
    //Insertion at a node
    head=insertAfterNode(head,third,88);
    display(head);
    return 0;
}
