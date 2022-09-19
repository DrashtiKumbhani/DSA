#include<stdio.h>
#define max 5
int rear=0,q[max],e,front=0,i;
void rearInsert(int val)
{
    if((rear+1)%max==front)
    {
        printf("\n Queue is full ");
    }
    else
    {
        rear=(rear+1)%max;
        q[rear]=val;
    }
    printf("\n front : %d \t rear : %d", front,rear);
}
void frontDelete()
{
    int x=-1;
    if(front==rear)
    {
        printf("\n Queue is Empty ");
        front=rear=0;
    }
    else
    {
        front=(front+1)%max;
        x=q[front];   
    }
    printf("\n Deleted Element is : %d",x);
    printf("\n Front %d \t rear : %d", front,rear);
}

void display()
{
    for(i=front+1;i!=(rear+1)%max;i=(i+1)%max)
    {
        printf("\n %d ",q[i]);
    }
    printf("\n front : %d \t rear : %d",front,rear);
}
int main()
{
    int ch,val,n,val1;
    do
    {
        printf("\n --------- Queue ---------");
        printf("\n Press --> 1. Rear Insert ");
        printf("\n Press --> 2. Front Delete ");
        printf("\n Press --> 3. Display ");
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
                frontDelete();
                break;
            case 3:
               display();
                break;
            case 0:
                return 0;
                break;
            default:
                printf("\n Invalid Choice ");
                break;
        }
   }while(max!=0);
    
}



