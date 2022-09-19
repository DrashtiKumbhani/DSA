#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=11;
    head->link=NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=22;
    current->link=NULL;

    struct node *current1=(struct node *)malloc(sizeof(struct node));
    current1->data=33;
    current1->link=NULL;

    struct node *current2=(struct node *)malloc(sizeof(struct node));
    current2->data=44;
    current2->link=NULL;

    head->link=current;
    current->link=current1;
    current1->link=current2;

    //current->link=head;

    printf("%d \t",head->link->link->link->data);
    //printf("%d\t",current->link->data);
    return 0;
}