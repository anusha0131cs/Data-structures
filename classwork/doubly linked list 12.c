
#include<stdio.h>
#include<stdlib.h>
typedef struct LIST
{
    int data;
    struct LIST *next,*previous;
}*NODE;


NODE get_details()
{
    NODE newn = (NODE)malloc(sizeof(struct LIST));
    if(newn==NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    printf("Enter details\n");
    scanf("%d", newn->data);
    newn->previous = NULL;
    newn->next = NULL;
    return newn;
}

NODE insert_front(NODE head)
{
    NODE newn = get_details();
    if(head == NULL)
    {
        newn -> next = NULL;
        head = newn ;
        return newn ;
    }
    newn ->next = head;
    head->previous = newn ;
    head = newn ;
    return head;
}

NODE insert_end(NODE head)
{
    NODE newn = get_details();
    if(head == NULL)
    {
        newn -> previous = NULL;
        head = newn;
        return newn;
    }
    else
    {
         NODE temp = head;
        while(temp -> next != NULL)
            temp = temp -> next;
        temp -> next = newn;
        newn -> previous = temp;
        return head;
    }
}



void display(NODE head)
{
    if(head == NULL)
    printf("\nList is Empty!!!");
    else
    {
        NODE cur = head;
        printf("\nList elements are: \n");
        while(cur -> next != NULL)
        {
            printf("%d\n",cur->data);
        }
    }
}

NODE insert_specific(NODE head)
{
    NODE cur=head,temp=NULL;
    int pos,count=1;
    printf("enter the position\n");
    scanf("d",&pos);
    NODE newn=get_details();
    if(head==NULL)
    {
        newn->next=NULL;
        newn->previous=NULL;
        head=newn;
        return newn;
    }
    else
    {
        while(cur!=NULL)
        {
            if(count!=pos)
            {
                temp=cur;
                cur=cur->next;
                cur->previous=temp;
                count++;
            }
            else if(count==pos)
            {
                temp->next=newn;
                newn->previous=temp;
                newn->next=cur;
                cur->previous=newn;
                return newn;
                exit (0);
            }
        }
    }
    return head;
}

void main()
{
    NODE head;
    int choice;
    while(1)
    {
        printf("1.insert front 2.insert end 3. insert specific position 4. display 5. exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=insert_front(head);
                        break;
            case 2:head=insert_end(head);
                        break;
            case 3:head=insert_specific(head);
                        break;
            case 4:display(head);
                        break;
            case 5:exit(0);
                        break;
        }
    }
}
