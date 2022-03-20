#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int **arr;
    int R,C;
    struct Node *next;
};

void readInfo(struct Node *p)
{
    int i,j;
    printf("\nEnter order of matrix : ");
    scanf("%d%d",&p->R,&p->C);
    p->arr = malloc(sizeof(int *) * p->R);

    p->arr[0]=malloc(sizeof(int)*p->R*p->C);
    for(i=1;i<p->R;i++)
    {
        p->arr[i] = p->arr[i-1]+p->C;

    }

    printf("\nEnter matrix of order %dX%d",p->R,p->C);
    for(i=0;i<p->R;i++)
    {
        for(j=0;j<p->C;j++)
            scanf("%d",&p->arr[i][j]);
    }
}

void displayInfo(struct Node *p)
{
    int i,j;
    printf("\nMatrix order %dX%d",p->R,p->C);

    for(i=0;i<p->R;i++)
    {
        printf("\n");
        for(j=0;j<p->C;j++)
            printf(" %d ",p->arr[i][j]);
    }
}

struct Node *getNode()
{
    return(malloc(sizeof(struct Node)));
};

void freeNode(struct Node *p)
{
    free(p->arr[0]);
    free(p->arr);
    free(p);

}

struct Node *insertFront(struct Node *first)
{
    struct Node *nw;
    nw = getNode();
    readInfo(nw);
    nw->next = first;
    first = nw;
    return first;
}

struct Node *insertRear(struct Node *first)
{
    struct Node *nw,*last;
    nw = getNode();
    readInfo(nw);
    nw->next = NULL;
    if(first == NULL)
        return nw;
    else
    {
        for(last=first;last->next!=NULL;last=last->next);
        last->next = nw;
    }
    return first;
};

struct Node *insertAtAnyPosition(struct Node *first,int position)
{
    struct Node *nw,*cur;
    int i;

    nw = getNode();
    readInfo(nw);
    nw->next = NULL;
    if(first == NULL)
        return nw;

    if(position == 1)
    {
        nw->next = first;
        first = nw;
    }
    else
    {
        for(cur=first,i=1;cur->next!=NULL && i<(position-1);cur=cur->next,i++);
        nw->next = cur->next;
        cur->next = nw;
    }
    return first;
};

void displayAllNodes(struct Node *first)
{
    struct Node *cur;
    for(cur=first;cur!=NULL;cur=cur->next)
    {
        displayInfo(cur);
        printf("\n-----------------------------------------------------");
    }


}
int main()
{
    int ch,position;
    struct Node *first=NULL;
    do
    {
        printf("\n1->Insert front 2->Insert end 3->Insert at any position  8->Display all 9->Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: first = insertFront(first);
                    break;
            case 2: first = insertRear(first);
                    break;
            case 3: printf("\nAt which position ? : ");
                    scanf("%d",&position);
                    first = insertAtAnyPosition(first,position);
                    break;
            case 8: displayAllNodes(first);
                    break;
            case 9: break;
        }
    }while(ch!=9);
    return 0;
}
