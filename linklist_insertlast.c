#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int cnt=0;
    if(head==NULL)
        printf("\n List is Empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n count : %d",cnt);
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr=*head_ref;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=new_data;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
}
void insert_first(struct node **head_ref,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->next=*head_ref;
    temp->data=data;
    *head_ref=temp;
}
void delete_last(struct node **head)
{
    struct node *ptr=*head;
    if(*head==NULL )
    {
        printf("\n Lit is Empty ");
        return;
    }
    if(ptr->next==NULL)
    {
        free(ptr);
        return;
    }
    while(ptr->next->next!=NULL)
        ptr=ptr->next;
    ptr->next=NULL;
     
}
void delete_first(struct node **head)
{
    struct node *ptr=*head;
    if(*head==NULL)
        printf("\n List is Empty ");
    *head=ptr->next;
    free(ptr);
}
void middle_insert(struct node **head,int n_data,int pos)
{
    struct node *ptr=*head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *nnode=*head;
    temp->data=n_data;
    while(ptr->data!=pos)
    {
        ptr=ptr->next;
    }
    nnode=ptr->next;
    ptr->next=temp;
    temp->next=nnode;
    return;
}
void middle_delete(struct node **head,int key)
{
    struct node *temp=*head,*prev;
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return;
    }
    prev->next=temp->next;
    free(temp);
}
int main()
{
    struct node *head=NULL;
    int n,ch,new_data,n_data,data,pos;
    do
    {
        printf("\n --------- Queue ---------");
        printf("\n Press --> 1. First Insert ");
        printf("\n Press --> 2. Last Insert ");
        printf("\n Press --> 3. First Delete ");
        printf("\n Press --> 4. Last Delete ");
        printf("\n Press --> 5. Middle Insert ");
        printf("\n Press --> 6. Middle Delete ");
        printf("\n Press --> 7. Display ");
        printf("\n Press --> 0. Exit ");
        printf("\n -------------------------");
        printf("\n Enter Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter a Value : ");
                scanf("%d",&data);
                insert_first(&head,data);
                break;
            case 2:
                printf("\n Enter a Value : ");
                scanf("%d",&new_data);
                insert_end(&head,new_data);
                break;
            case 3:
                delete_first(&head);
                break;
            case 4:
                delete_last(&head);
                break;
            case 5: 
                printf("\n Enter a position value : ");
                scanf("%d",&pos);
                printf("\n Enter a Value : ");
                scanf("%d",&n_data);
                middle_insert(&head,n_data,pos);
                break;
            case 6:
                printf("\n Enter deleted Value : ");
                scanf("%d",&data);
                middle_delete(&head,data);
                break;
            case 7:
                head_count(head);
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