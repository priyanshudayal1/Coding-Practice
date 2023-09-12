#include<stdio.h>
int main(){
    int i=0;
    char str1[50],str2[50];
    printf("Enter the string (by char method):");
    while (str1[i]!='\n'){
        scanf("%c",&str1[i]);
        i++;
    }
    str1[i]='\0';
    printf("\nEnter the string(gets method):");
    scanf("%s",&str2);
    if (str1==str2){
        printf("\nThe both the entered strings are equal.");
    }
    else{
        printf("\nThe strings are not equal.");
    }
}