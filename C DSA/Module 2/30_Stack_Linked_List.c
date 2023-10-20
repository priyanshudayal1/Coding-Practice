#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
};

int isEmpty(struct node *top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node *top){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0; 
    }
}

struct node* push(struct node *top,int x){
    if(isFull(top)){
        printf("Stack Overflow!!\n");
    }
    else{
        struct node *n=(struct node *)malloc(sizeof(struct node));
        n->data=x;
        n->nxt=top;
        top=n;
        return top;
    }
}

int pop(struct node **top){
    if(isEmpty(*top)){
        printf("Stack Overflow\n");
    }
    else{
        struct node *n=*top;
        (*top)=(*top)->nxt;
        int x=n->data;
        free(n);
        return x;
    }
}

int peek(struct node *top,int pos){
    struct node *ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->nxt;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    struct node *top=NULL;
    top=push(top,10);
    printf("%d\n",isEmpty(top));
    printf("%d\n",isFull(top));
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,50);
    printf("%d\n",isFull(top));
    printf("%d\n",isEmpty(top));
    int ele=pop(&top);
    printf("Poped Element is : %d \n",ele);
    ele=pop(&top);
    printf("Poped Element is : %d\n",ele);
    printf("Element at %d position is %d \n",1,peek(top,1));
    printf("Element at %d position is %d \n",2,peek(top,2));
 
    return 0;
}