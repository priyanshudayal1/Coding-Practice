#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int pop(struct stack *s){
    int poped=s->arr[s->top];
    s->top--;
    return poped;
}

int isFull(struct stack *ptr){
    if(ptr->top>=ptr->size-1){
        return 1;
    }   
    else{
        return 0;
    } 
}

int stackTop(struct stack *s){
    return s->arr[s->top];
}

void pushElement(struct stack *s,char val){
    s->top++;
    s->arr[s->top]=val;
}

int precendence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    if(ch=='+' || ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}


int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='/' || ch=='*'){
        return 1;
    }
    else{
        return 0;
    }
}

char * infixToPostfix(char * infix){
    struct stack *sp=(struct stack *)(malloc(sizeof(struct stack)));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    char *postfix=(char *)malloc(strlen(infix)+1*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precendence(infix[i])>precendence(stackTop(sp))){
                pushElement(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main(){
    char infix[]="a-b ";
    printf("The infix expression is : %s\n",infix);
    char *post=infixToPostfix(infix); 
    printf("The postfix expression is : %s",post);
    return 0;
}