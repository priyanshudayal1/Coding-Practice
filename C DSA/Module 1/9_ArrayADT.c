#include <stdio.h>
#include <stdlib.h>
struct myArr
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myArr *a, int tSize, int uSize)
{
    //(*a).total_size = tSize;
    a->total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct myArr *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setValue(struct myArr *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("\nEnter a element :");
        scanf("%d", (a->ptr[i]));
    }
}

int main()
{
    struct myArr A1;
    createarray(&A1, 100, 2);
    setValue(&A1);
    show(&A1);

    return 0;
}