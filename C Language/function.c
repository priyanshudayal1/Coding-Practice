
#include<stdio.h>

int change(int a);
void gm(){
    printf("Good Morning\n");
}

void ga(){
    printf("Good Afternoon\n");
}
void gn(){
    printf("Good Night");
}

int main(){
    gm();
    ga();
    gn();
    int b=change(45);
    printf("\n%d",b);
    return 0;
}

int change(int a){
    a=70;
    return a;
}