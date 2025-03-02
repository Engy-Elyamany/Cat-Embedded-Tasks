#include <stdio.h>
#include <stdbool.h>
#define maxSize 100
int q[maxSize];
int front = -1, rear = -1, length = 0;

bool isEmpty()
{
    return (front == -1 || front > rear);
}

bool isFull()
{
    return rear == maxSize - 1;
}

void enqueue(int val)
{
    if (isFull())
        printf("Full Queue! Can't enqueue\n");
    else
    {
        if (isEmpty())
            front = rear = 0;
        else
        {
            rear++;
        }
        q[rear] = val;
        length++;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Empty Queue! Can't delete\n");
    }

    else
    {
        int n = q[front];
        if (front == rear)
            front = rear = -1;
        else
        {
            front++;
        }
        length--;
        printf("the deleted element = %d\n", n);
    }
   
}

void peek(){
     if (isEmpty())
    {
        printf("Empty Queue! Can't delete\n");
    }
    else{
        printf("The first element = %d\n",q[front]);
    }
    
}

void display(){
    if(isEmpty())
    printf("Empty Queue!!\n");
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
        
    }
}

void main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    display();

    peek();
    dequeue();
    display();
}