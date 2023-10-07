#include<stdio.h>
#include<stdlib.h>

struct  stack
{
    int size;
    int top;
    int *arr;
};

void push(int e,int *arr,int top){
    arr[top]=e;

}

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top>=ptr->size-1){
        return 1;
    }   
    else{
        return 0;
    } 
}

int main(){
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int *)(malloc(s->size*sizeof(int)));
    int result=isEmpty(s);
    printf("%d \n",result);
    //pushing element manually
    s->arr[0]=10;
    s->top++;
    printf("%d\n",isEmpty(s));
    printf("%d\n",isFull(s));
    return 0;
}
