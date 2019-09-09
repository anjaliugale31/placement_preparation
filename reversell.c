#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};

struct node *create(struct node *start);
int disp(struct node *start);
struct node *rev(struct node *start);

struct node *create(struct node *start)
{
    struct node *newnode,*temp;
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof newnode);
        printf("\nval:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            temp=start=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
return start;
}

int disp(struct node *start)
{
    struct node *temp=start;
    while(temp)
    {
        printf("\t>%d",temp->data);
         temp=temp->next;
   }
    //printf("\t->%d",temp->data);
}

struct node *rev(struct node *start)
{
    struct node *newnode=NULL,*temp=NULL;
    while(start)
    {
        //printf("%d\t",start->data);
        newnode=start->next;
        start->next=temp;
        temp=start;
        //printf("%d\t",temp->data);
        start=newnode;
       // printf("%d\t",newnode->data);
    }
    return temp;
}

// void rev(struct node *start)
// {
//     struct node *temp;
//     int cnt=0,i;
//     for(temp=start;temp->next!=NULL;temp=temp->next)
//     {
//         cnt++;
//     }
//     while(cnt>=0)
//     {
//         temp=start;
//         for(i=0;i<cnt;i++)
//         {
//             temp=temp->next;
//         }
//         printf("%d\t",temp->data );
//         cnt--;
//     }
// }

int main()
{
    struct node *start=NULL,*q=NULL;
    start=create(start);
    disp(start);
    printf("\n rev:");
    q=rev(start);
    disp(q);
}
