#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[]={50,40,30,20,10};
void print()
{
    
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
void bubble_sort()
{
    int x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];  
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}
void selection_sort()
{
    int i,j,x;
    printf("\nselection_sort\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
        print();
    }
}
int main()
{
    print();
    selection_sort();
    print();
}

