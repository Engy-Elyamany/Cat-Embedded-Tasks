#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int length = 0;
struct node
{
    int item;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;


bool isEmpty()
{
    return (front == NULL );
}

void enqueue(int element)
{
    struct node *newItem;
    newItem = (struct node *)malloc(sizeof(struct node));
    if (newItem == NULL)
    {
        printf("Allocation failed in Enqueue\n");
    }
    else
    {

        length++;
        // construct the new node
        newItem->item = element;
        newItem->next = NULL;

        // link the new node to the rest of the queue
        if (isEmpty())
        {
            front = rear = newItem;
        }else{
             rear->next = newItem;
        rear = newItem;
        }
       
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
         struct node *temp = front;
        if (length == 1)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }
        temp->next = NULL;
        free(temp);
        length--;
    }
}

void display(){ 
    
    if(isEmpty())
    printf("Empty Queue!!\n");
    else{
    struct node *cur = front;
    while (cur != NULL)
    {
        printf("%d ", cur->item);
        cur = cur->next;
    }
    printf("\n");
}
}

int main()
{
    enqueue(5);
    display();
    dequeue();
    display();
    return 0;
}
