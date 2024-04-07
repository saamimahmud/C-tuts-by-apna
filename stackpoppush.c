#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_a[MAX] ;
int top=-1;

void push(int data)
{
    if(top==MAX -1)
    {
        printf("Stack overflow\n");
        return;
    }
    top=top+1;
    stack_a[top]= data;
}

    int pop()
    {
        int value ;
        if(top==-1)
        {
            printf("Stack underflow\n");
            exit(1);
            
        }
        value=stack_a[top];
        top=top-1;
        return value;
    }

    void print(){
        int i;
        if(top==-1)
        {
            printf("Stack underflow\n");
            return;
        }
        for(i=top;i>=0;i--)
        printf("%d ", stack_a[i]);
        printf("\n");
    }
    int main()
    {
        int data;
        push(1);
        push(2);
        push(3);
        push(4);
       /*/ data=pop();
        data=pop();*/
        print();
        return 0;
    }

