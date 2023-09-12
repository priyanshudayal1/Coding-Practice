#include<stdio.h>
int main(){
    int sub1,sub2,sub3;
    printf("Enter the marks of the 3 subjects:");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);
    int total=(sub1+sub2+sub3)/3;
    if (sub1>=33 && sub2>=33 && sub3>=33){
        if(total>=40){
            printf("The student is passed.");
        }
        else{
            printf("The student is not passed.");
        }
    }
    else{
        printf("The student is not passed.");
    }
}