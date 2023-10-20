#include<stdio.h>
#include<stdlib.h>

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

void pushElement(struct stack *s,char val){
    s->top++;
    s->arr[s->top]=val;
}

int parenthesisMatch(char * exp){
    struct stack *s;
    s->size=100;
    s->top=-1;
    s->arr=(char *)(malloc(s->size*sizeof(char)));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            pushElement(s,'(');
        }
        else if (exp[i]==')'){
            if (isEmpty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s)){
        return 1;
    }
}


int main(){
    char exp[]="((8)*(9))";
    if(parenthesisMatch(exp)){
        printf("The Expression is balanced");

    }
    else{
        printf("The Expression is not balanced");
    }
    return 0;
}