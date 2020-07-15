
1. Implement Queue using Stack.

#include<stdio.h>
#include<stdlib.h>

void push1(int );
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void create();
void disp();

int st1[100],st2[100];
int top1=-1;
int top2=-1;
int count=0;

void main(void)
{
    int ch;
    printf("\n1:enqueu ele\n2:dequeue ele\n3:display ele:\n4:exit");
    create();
    do
    {
        printf("\nEntre choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:disp();break;
            case 4:exit(0);break;
            default:printf("\ninvalid case");break;

        }

    }while(ch!=5);
}


void create()
{
    top1=top2=-1;
}

void push1(int data)
{
    st1[++top1]=data;   //top will come to at top=1 +
}

int pop1()
{
    return (st1[top1--]);

}

void push2(int data)
{
    st2[++top2]=data;
}

int pop2()
{
    return(st2[top2--]);
}

void enqueue()
{
    int data,i;
    printf("\nentre data in queue");
    scanf("%d",&data);
    push1(data);
    count++;

}

void dequeue()
{
    int i;
    for(i=0;i<=count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for(i=0;i<=count;i++)
    {
        push1(pop2());
    }
}


void disp()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("\n%d",st1[i]);
    }
}