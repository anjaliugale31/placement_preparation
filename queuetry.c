#include <stdio.h>
#include <stdlib.h>
 struct node
{
    int info;
    struct node *q;
}*front,*rear,*temp,*front1;
 
int frontelement();
void enQueue(int data);
void deQueue();
void empty();
void peek();
void create();

 
int count = 0;
 
void main()
{
    int no, ch, ele;
 
    printf("\n 1:Enque");
    printf("\n 2:Deque");
    printf("\n 3:peek");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:printf("Enter number : ");
            scanf("%d", &no);
            enQueue(no);
            break;
        case 2:deQueue();
            break;
        
        case 3:peek();
                break;
        default:printf("invalid");
            break;
        }
    }
}
void create()
{
    front = rear = NULL;
}
void enQueue(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->q = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->q = temp;
        temp->info = data;
        temp->q = NULL;
 
        rear = temp;
    }
    count++;
}
 void peek()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->q;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
void deQueue()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n queue is empty");
        return;
    }
    else
        if (front1->q != NULL)
        {
            front1 = front1->q;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}