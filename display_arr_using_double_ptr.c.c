/*display the elements of the array using double pointer*/

#include<stdio.h>
#include<stdlib.h>

#define N 5

void display(int **dob_ptr)
{
    int i;
    printf("The elements of the array are:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",*((*dob_ptr)+i));
    }
    printf("\n");
}

void scan_array(int *ptr)
{
    printf("Eneter the 5 elements of the array:\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",(ptr+i));
    }
}
int main()
{
    int *arr, i ;
    arr=(int *)malloc(sizeof(int)*N);
    scan_array(arr);
    display(&arr);
    
    return 0;
}
