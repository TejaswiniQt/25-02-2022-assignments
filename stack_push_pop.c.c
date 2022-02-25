/*Implementation of stack using single linked list*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}stack;


void push(stack **top_arg,int data)
{
    stack *new=(stack *)malloc(sizeof(stack));
    if(new==NULL)
    {
        printf("memory not allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
        
        if(*top_arg==NULL)
        {
            *top_arg = new;
        }
        else
        {
            new->link = *top_arg;
            *top_arg = new;
        }
        printf("The pushed data=%d\n",(*top_arg)->data);
    }
    
}

void pop(stack **top_arg)
{
    if(*top_arg == NULL)
    {
        printf("Stackis empty\n");
    }
    else
    {
        stack *temp = *top_arg;
        *top_arg = temp->link;
        printf("The poped element is:%d\n",temp->data);
        free(temp);
    }
}

void peek(stack **top_arg)
{
    if(*top_arg == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The Top most element is: %d\n",(*top_arg)->data);
    }
}


void display(stack **top_arg)
{
    stack *temp = *top_arg;
    if(*top_arg == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack contains:\n");
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
int main()
{
    stack *top=NULL;
    push(&top,10);
    push(&top,20);
    push(&top,30);
    display(&top);
    peek(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    display(&top);
    return 0;
}
