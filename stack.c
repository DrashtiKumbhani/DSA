#include<stdio.h>
#define n 5
int top=-1,stack[n],i,s;
void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("\n %d",stack[i]);
    }
}
void push(int val)
{
    if(top>n-1)
    {
        printf("\n overflow");
    }
    else
    {
        stack[++top]=val;
    }
}
void pop()
{
    int x;
    if(top<=-1)
    {
        printf("\n underflow");
    }
    else
    {
        x=stack[top--];
        printf("\n poped element is %d",x);
    }
}
int peep(int val)
{  
    int j;
    for( j=0;j<n;j++)  
        if(val==stack[j])                    
            return j+1;            
    return -1;
}
int main()
{
    int ch,val,pos,x;
    do
    {
        printf("\n press --> 1. Push ");
        printf("\n press --> 2. Pop ");
        printf("\n press --> 3. Peep ");
        printf("\n press --> 4. Show ");
        printf("\n press --> 0. Exit ");

        printf("\n Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter value : ");
                scanf("%d",&val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("\n Enter Search value : ");
                scanf("%d",&x);
                int ret= peep(x);
                if(ret<0)
                    printf("\n element not found ");
                else
                    printf("\n element at %d position ",ret);
                break;
            case 4:
                print();
                break;
            case 0:
                return 0;
                break;
            default:
                printf("\n Wrong choice");
                break;                                 
        }
    }while(n!=0);
}
