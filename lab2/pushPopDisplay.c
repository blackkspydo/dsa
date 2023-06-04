// Wap to show push, pop and display operations on stack

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX], top = -1;

void push(int);
int pop();
void display();

int main()
{
    int choice, val;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be pushed: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            val = pop();
            if (val != -1)
                printf("The value deleted from stack is: %d\n", val);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}

void push(int val)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = val;
    }
}

int pop()
{
    int val;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
