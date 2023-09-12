#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//1.Deletion from the start
struct node * delFromstart(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

//2.Deletion between a node from an index
struct node * delBetweenanode(struct node *head,int index){
    struct node *ptr=head;
    struct node *q=head->next;
    int i=0;
    while (i<index-1){
        ptr=ptr->next;
        q=q->next;
        i++;
    }
    ptr->next=q->next;
    free(q);
    return head;
}

//3.Deleting the last node
struct node * delLastnode(struct node *head){
    struct node *p=head;
    struct node *q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//4.Deleting the element with a given value
struct node * delGivenvalue(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while (q->data=!value && q->next!=NULL){
        p=p->next;
        q=q->next;

    }
    if (q->data==value){
        p->next=q->next;
        free(q);
    } 
    return head;  
}

//Displaying the linked list
void display(struct node *head){
    while(head!=NULL){
        printf("\nELement: %d",head->data);
        head=head->next;
    }    
}

int main(){
    struct node *head=(struct node*)(malloc(sizeof(struct node)));
    struct node *sec=(struct node*)(malloc(sizeof(struct node)));
    struct node *third=(struct node*)(malloc(sizeof(struct node)));
    struct node *fourth=(struct node*)(malloc(sizeof(struct node)));
    struct node *fifth=(struct node*)(malloc(sizeof(struct node)));
    head->data=10;
    head->next=sec;
    sec->data=20;
    sec->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=fifth;
    fifth->data=50;
    fifth->next=NULL; 
    printf("\nThe original linked list is:");
    display(head);
    //Deletion from the begining
    // head=delFromstart(head);
    // printf("\nAfter deletion from the start : ");
    // display(head);
    // printf("\nDeleting the 2nd index element");
    // head=delBetweenanode(head,2);
    // display(head);
    // //Delting the last element
    // printf("\nDeleting the last node: ");
    // head=delLastnode(head);
    // display(head);
    //Deleting the given value node
    printf("\nEnter the value you want to delete:");
    int val;
    scanf("%d",val);
    head=delGivenvalue(head,val);
    printf("\nAfter deleting the given value node: ");
    display(head);
    return 0;



}