//*swap elements*//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
}*first;

void createNodeList(int n);
void displayList();
void swapelements();

int main()
{
    int ch,n;

    printf("1->createNodeList");
    printf("2->displayList");
    printf("3->swap elements");
    printf("4->exit");



    while(ch!=4)
    {
            printf("enter ur choice");
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

            case 3:swapelements();
                   break;

            case 4:exit;
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

void swapelements()
{
    struct node *t1,*t2,*t3;
    t1=NULL;
    t2=first;
    t3=t2->next;

    while(t2!=NULL&&t3!=NULL)
    {
        t2->next=t3->next;
        t3->next=t2;
        if(t1==NULL)
        {
            t3=first;
        }
        else
        {
            t1->next=t3;
        }
        t1=t2;
        t2=t1->next;
        if(t2!=NULL)
        {
            t3=t2->next;
        }

    }
}
