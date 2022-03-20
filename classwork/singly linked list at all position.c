#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
}*first;

void createNodeList(int n);
void displayList();
void insertfront();
void insertend();
void insertspecific();
void deletefront();
void deleterear();
void deletespecific();

int main()
{
    int n,num,ch;

    printf("1.create list\n");
    printf("2.display list\n");
    printf("3.insert front\n");
    printf("4.insertend\n");
    printf("5.insertspecific\n");
    printf("6.deletefront\n");
    printf("7.deleterear\n");
    printf("8.deletespecific\n");
    printf("9.exit\n");

    while(ch!=9)
    {
        printf("enter choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf(" Input the number of nodes\n ");
                   scanf("%d", &n);
                   createNodeList(n);
                   break;

            case 2:printf("\n Data entered in the list\n");
                   displayList();
                   break;

            case 3:insertfront();
                   break;

            case 4:insertend();
                   break;

            case 5:insertspecific();
                   break;


            case 6:deletefront();
                   break;

            case 7:deleterear();
                   break;

            case 8:deletespecific();
                   break;

            case 9:exit;
                   break;
        }
    }


}
void createNodeList(int n)
{
    struct node *nwNode, *tmp;
    int num, i;
    first = (struct node *)malloc(sizeof(struct node));

    if(first == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        first->num = num;
        first->next = NULL;
        tmp = first;

        for(i=2; i<=n; i++)
        {
            nwNode = (struct node *)malloc(sizeof(struct node));
            if(nwNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                nwNode->num = num;
                nwNode->next = NULL;

                tmp->next = nwNode;
                tmp = tmp->next;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(first == NULL)
    {
        printf(" List is empty");
    }
    else
    {
        tmp = first;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);
            tmp = tmp->next;
        }
    }
}

void insertfront()
{
    int num;
    struct node *nwnode;
    nwnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the the element to be inserted\n");
    scanf("%d",&num);

    nwnode->num=num;
    nwnode->next=first;
    first=nwnode;


}

void insertend()
{
    int num;
    struct node *temp,*nwnode;
    nwnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the element to be inserted\n");
    scanf("%d",&num);

    nwnode->num=num;
    nwnode->next=NULL;
    temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nwnode;
}

void insertspecific()
{
    int num,pos,i,n;
    struct node *temp,*nwnode,curr;
    nwnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the position\n");
    scanf("%d",&pos);

    if(pos<n)
    {
        printf("invalid");
    }
    else
    {
        temp=first;
        {
            if(i<pos)
            {
                temp=temp->next;
                i++;
            }
        }
        printf("enter the element to be inserted\n");
        scanf("%d",&num);

        nwnode->num=num;
        nwnode->next=temp->next;
        temp->next=nwnode;
    }




}


void deletefront()
{
    struct node *curr;

    curr=first;
    first=curr->next;
    free(curr);
}

void deleterear()
{
    struct node *curr,*temp;

    temp=NULL;
    curr=first;

    while(curr->next!=NULL)
    {
        temp=curr;
        curr=curr->next;
    }

    temp->next=NULL;
    free(curr);
}

void deletespecific()
{
    int pos,n;
    struct node *curr,*temp;

    temp=NULL;
    curr=first;

    printf("enter the position at which element to be deleted");
    scanf("%d",&pos);

    if(pos<n)
    {
        printf("invalid");
    }
    else
    {
        while(curr->next!=NULL)
        {
            temp=curr;
            curr=curr->next;

        }
    }
}


