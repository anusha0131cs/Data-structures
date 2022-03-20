#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

void read(struct student *r, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
      printf("enter the student id and name and percentage\n");
      scanf("%d%s%f",&r->id,r->name,&r->percentage);
    }

}
void disp(struct student *r,int n)
{
    int i;

    printf("record of student\n");

    for(i=0;i<n;i++)
    {
        printf("student id %d\n",r->id);
        printf("student name %s\n",r->name);
        printf("student percentage %0.2f\n",r->percentage);
    }
}


 int main()
 {
  int n;
  struct student *r,p;
  r=&p;

  printf("enter the number of student");
  scanf("%d",&n);
  read(r,n);
  disp(r,n);
 }

