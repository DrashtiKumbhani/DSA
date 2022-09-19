#include<stdio.h>
int front=-1,rear=-1,max=5,q[5],i;
void rearInsert(int val)
{
    if(rear+1==max)
    {
        printf("\n Queue is overflow ");
    }
    else if(front==-1&&rear==-1)
    {
        q[++rear]=val;
    }
    else
    {
        q[++rear]=val;
    }
}
void frontInsert(int val1)
{
    if(rear-1==max)
    { 
        printf("\n Queue is overflow ");
    }
    else
    {
        q[front--]=val1;
    }
}
void firstDelete()
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue is already empty ");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        ++front;
    }
}
void rearDelete()
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue is already empty ");
    } 
    else if(front==rear)
    {
        front=rear-1;
    }
    else
    {
        --rear;
    }
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue is empty... ");
    }
    else
    {
        for(i=front+1;i<=rear;i++)
        {
            printf("\n %d : %d",i,q[i]);
        }
    }
}
int main()
{
    int ch,val,n,val1;
    do
    {
        printf("\n --------- Queue ---------");
        printf("\n Press --> 1. Rear Insert ");
        printf("\n Press --> 2. Front Insert ");
        printf("\n Press --> 3. Front Delete ");
        printf("\n Press --> 4. Rear Delete ");
        printf("\n Press --> 5. Display ");
        printf("\n Press --> 0. Exit ");
        printf("\n -------------------------");
        printf("\n Enter Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter a Value : ");
                scanf("%d",&val);
                rearInsert(val);
                break;
            case 2:
                printf("\n Enter a Value : ");
                scanf("%d",&val1);
                frontInsert(val1);
                break;
            case 3:
                firstDelete();
                break;
            case 4:
                rearDelete();
                break;
            case 5:
                display();
                break;
            case 0:
                return 0;
                break;
            default:
                printf("\n Invalid Choice ");
                break;
        }
   }while(n!=0);
}