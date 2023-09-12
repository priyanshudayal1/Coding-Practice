#include<stdio.h>
struct students
{
    char name[100];
    int age;
    char city[50];
};

int main(){
    struct students s1;
    struct students s2;
    struct students s3;
    int i=0;
    printf("\nEnter the name of student :");
    gets(s1.name);
    printf("\nEnter the age of the student: ");
    scanf("%d",&s1.age);
    printf("\nEnter the city of the student: ");
    gets(s1.city);
    printf("\nEnter the name of student :");
    gets(s2.name);
    printf("\nEnter the age of the student: ");
    scanf("%d",&s2.age);
    printf("\nEnter the city of the student: ");
    gets(s2.city);
    printf("\nEnter the name of student :");
    gets(s3.name);
    printf("\nEnter the age of the student: ");
    scanf("%d",&s3.age);
    printf("\nEnter the city of the student: ");
    gets(s3.city);
    return 0;
}