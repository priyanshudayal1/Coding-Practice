#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *s){
    if (s->size-1<=s->top){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *s,int val){
    s->top++;
    s->arr[s->top]=val;
}

int pop(struct stack *s){
    int poped=s->arr[s->top];
    s->top--;
    return poped;
}

void peek(struct stack *s){
    while ((s->top)!=-1){
        printf("%d \n",s->arr[s->top]);
        s->top--;
    }
}



int main(){
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    char m[]="MENU";
    while (1)
    {
        printf("-------------------------------\n");
        int ch;
        printf("%s\n",m);
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Is Empty?\n");
        printf("5.Is Full?\n");
        printf("6.Exit\n");
        printf("-------------------------------\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        if(ch==1){
            if (s->top>=s->size-1){
                printf("Stack Overflow\n");
            }
            else{
                int val;
                printf("Enter element to be pushed:");
                scanf("%d",&val);
                push(s,val);
            }
        }
        else if(ch==2){
            if(s->top==-1){
                printf("Stack Underflow\n");
            }
            else{
                printf("%d\n",pop(s));
            }

        }
        else if(ch==3){
            printf("Top-->>\t");
            peek(s);
        }
        else if(ch==4){
            int r=isEmpty(s);
            if(r==1){
                printf("Stack is Empty");
            }
            else{
                printf("Stack is not Empty");
            }
        }
        else if(ch==5){
            int r2=isFull(s);
            if(r2==1){
                printf("The Stack is Full");
            }
            else{
                printf("The Stack is not Full");
            }
            
        }
        else if(ch==6){
            printf("Exitted Successfully!!!\n");
            break;
        }
        else{
            printf("Enter a valid option!!\n");
        }
    }
    return 0;
}