#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
    printf("name\tid\tpercentage\n");


    for(i=0;i<n;i++)
    {
      printf("%s\t%d\t%0.2f\n",r->name,r->id,r->percentage);
    }
}


 int main()
 {
  int n;
  struct student *r,p;
  r=&p;

  printf("enter the number of student");
  scanf("%d",&n);
  r=(struct student*)malloc(n*sizeof(struct student));
  read(r,n);
  disp(r,n);
  free (r);
  return 0;

 }
