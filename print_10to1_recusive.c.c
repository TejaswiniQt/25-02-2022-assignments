/*To print numbers from 10 to 1 using recursion function*/

#include<stdio.h>

void recursive_num(int num)
{
    printf("%d ",num);
    if(num>1)
    recursive_num(num-1);
}


int main()
{
    int num=10;
    printf("The numbers from 10 to 1 are:\n");
    recursive_num(num);
    return 0;
}
