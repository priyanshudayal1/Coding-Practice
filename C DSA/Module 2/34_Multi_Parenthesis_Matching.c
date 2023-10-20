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

char stackTop(struct stack *s){
    return s->arr[s->top];
}

int isFull(struct stack *ptr){
    if(ptr->top>=ptr->size-1){
        return 1;
    }   
    else{
        return 0;
    } 
}

int match(char a,char b){
    if (a=='{' && b=='}'){
        return 1;
    }
    else if(a=='(' && b==')'){
        return 1;
    }
    else if(a=='[' && b==']'){
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
    char popped_ch;
    s->size=100;
    s->top=-1;
    s->arr=(char *)(malloc(s->size*sizeof(char)));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
            pushElement(s,exp[i]);
        }
        else if (exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if (isEmpty(s)){
                return 0;
            }
            popped_ch=pop(s);
            if(!match(popped_ch,exp[i])){
                return 0;
            }
        }
    }
    if (isEmpty(s)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    char exp[]="{7-(3-2)+[8+(99-11)]}";
    if(parenthesisMatch(exp)){
        printf("The Expression is balanced");

    }
    else{
        printf("The Expression is not balanced");
    }
    return 0;
}