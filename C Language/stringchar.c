#include<stdio.h>
int main(){
    char name[]="piyush";
    printf("The string is : %s\n",name);
    for (int i=0;i<6;i++){
        printf("%c",name[i]);
    }
    return 0;
}