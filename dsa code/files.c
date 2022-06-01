#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char p[500];
    struct node*next;
};typedef struct node*NODE;
NODE getnode()
{
    NODE temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("LINKED LIST IS EMPETY\n");
    }
    temp->next=NULL;
    return temp;
}
NODE insert_last(NODE a,NODE temp);
void display(NODE a);
NODE comp(NODE a,NODE b);
NODE file_a(FILE *fp, NODE a);
NODE file_b(FILE *fp1, NODE b);
void main()
{
    FILE *fp,*fp1;
    NODE a=NULL;
    NODE b=NULL;
    a=file_a(fp,a);
    b=file_b(fp1,b);
    printf("\nLIST 1:\n");
    display(a);
    printf("\nLIST 2:\n");
    display(b);
    printf("\n");
    printf("AFTER COMPARING THE COUNT IS= ");
    comp(a,b);

}

NODE insert_last(NODE a,NODE temp)
{
    NODE temp1=a;
    if(a==NULL)
    {
        a=temp;
        temp->next=NULL;
        return a;
    }
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->next=NULL;
    return a;
}
void display(NODE a)
{
    NODE temp1=NULL;
    if(a==NULL)
    {
        printf("LINKED LIST NOT CREATED\n");
    }
    else
    {
        temp1=a;
        while(temp1!=NULL)
        {
            printf("%s",temp1->p);
            temp1=temp1->next;
        }
    }
}
NODE comp(NODE a,NODE b)
{
    NODE temp1,temp2,temp3;
    int count=0,ccount=0,pcount=0;
    temp1=a;
    while(temp1!=NULL)
    {
        ccount=count=0;
        temp2=temp1;
        temp3=b;
        while(temp3!=NULL)
        {
            if(strcmp(temp2->p,temp3->p)==0)
            {
                count++;
                temp2=temp2->next;
                temp3=temp3->next;
                continue;
            }
            else
            {
                break;
            }
        }
        if(temp3==NULL)
        pcount++;
        while(ccount!=(count+1)&&temp1!=NULL)
        {
            temp1=temp1->next;
            ccount++;
        }
    }
    printf("%d\n",pcount);
}
NODE file_a(FILE *fp, NODE a)
{
    NODE x=NULL;
    fp=fopen("abc.txt","r");
    while(!feof(fp))
    {
        x=getnode();
        fscanf(fp,"%s",x->p);
        printf("%s",x->p);
        a=insert_last(a,x);
    }
    fclose(fp);
    return a;
}
NODE file_b(FILE *fp1, NODE b)
{
    NODE x=NULL;
    fp1=fopen("def.txt","r");
    while(!feof(fp1))
    {
        x=getnode();
        fscanf(fp1,"%s",x->p);
        printf("%s",x->p);
        b=insert_last(b,x);
    }
    fclose(fp1);
    return b;

}
