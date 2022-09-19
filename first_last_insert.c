#include<stdio.h>
int pos=0,a[10],i,s=10,e=10;
void frontInsert(int n)
{
    n=0;
    for(i=s-1;i>=n;i--)
    {
        a[i+1]=a[i];
    }
    a[n]=e;
    pos++;
}
void lastInsert(int n)
{
    a[pos++]=n;
}
void print()
{
    for(i=0;i<pos;i++)
    {
        printf("\n\t %d",a[i]);
    }
}
int main()
{
    int n;
    lastInsert(11);
    
    lastInsert(13);
    lastInsert(14);
    frontInsert(10);
    frontInsert(9);
    frontInsert(8);
    frontInsert(7);
    lastInsert(12);
    print();
}