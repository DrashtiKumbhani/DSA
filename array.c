#include<stdio.h>
int main()
{
    int a[8],i,j;
    for(i=0;i<8;i++)
    {
        printf("Enter Array : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
        
    }
    printf("\n array size : %d ",sizeof(a));
    //Insert Last
    for(j=a[i]-1;j<=a[0];j++)
    {
        a[j+1]=a[j];
        printf("\n insert first : %d",a[j]);
    }
    return 0;
}