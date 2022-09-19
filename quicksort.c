#include<stdio.h>
#include<stdlib.h>
int n;
int i,j,pivot,temp,count=1;
void print(int a[])
{
    int i;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void swap(int a[],int temp)
{
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;
    
}
void quicksort(int a[],int first,int last)
{
    
    if(first < last)
    {
        printf("\n Inside quick : ");
        print(a);
        pivot = first;
        i = first;
        j = last;
        while(i < j)
        {

        
            while(a[i] <= a[pivot] && i < last)
                i++;
            while(a[j] > a[pivot])
                j--;
            if(i < j)
            {
                swap(a,temp);
            }
        }
        swap(a,temp);
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
    } 
   
}
int main()
{
    int i,a[25],min=20,max=101,x;
    printf("\n How many elements ? : ");
    scanf("%d",&n);
    
    // printf("\n Enter Elements :  \t");
    for(i=0;i<n;i++)
    {
        printf("\n Enter Number : ");
        scanf("%d",&a[i]);
    }
    print(a);
    
    quicksort(a,0,n-1);
    
    printf("\n Order of soretd elements : ");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    return 0;
}

/*
How many elements ? : 11

 Enter 11 Elements : 61 37 40 34 83 82 100 22 86 48 67
 
 Inside quick : 61 37 40 34 83 82 100 22 86 48 67
 Inside quick : 22 37 40 34 48 61 100 82 86 83 67
 Inside quick : 22 37 40 34 48 61 100 82 86 83 67
 Inside quick : 22 34 37 40 48 61 100 82 86 83 67
 Inside quick : 22 34 37 40 48 61 100 82 86 83 67
 Inside quick : 22 34 37 40 48 61 67 82 86 83 100
 Inside quick : 22 34 37 40 48 61 67 82 86 83 100
 Inside quick : 22 34 37 40 48 61 67 82 86 83 100
 Order of soretd elements :  22  34  37  40  48  61  67  82  83  86  100

*/
