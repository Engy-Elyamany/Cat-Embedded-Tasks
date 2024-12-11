#include <stdio.h>
#include <stdbool.h>
#define max 100
int top = -1;
int stack[max];

bool isEmpty()
{
    return (top == -1);
}

bool isFull()
{
    return (top == max - 1);
}

void push(int element)
{
    if (isFull())
        printf("Stack is full! Can't add a new element\n");
    else
    {
        top++;
        stack[top] = element;
    }
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack is empty, Nothing to delete\n");
        return -1;
    }

    else
    {
        int n = stack[top];
        --top;
        return n;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("No elements in the stack to show\n");
        return -1;
    }

    else
    {
        return stack[top];
    }
}

void display()
{
    if (isEmpty())
        printf("Empty stack\n");
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    pop();
    peek();

    push(5);
    push(10);
    push(15);
    push(20);
    display();

    printf("The deleted element is %d \n", pop());
    printf("The last element is %d \n", peek());
    display();

    return 0;
}