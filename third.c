#include<stdio.h>
#include<stdlib.h>
struct node
{
  char st[10];
  float val;
  int data;
  struct node *next;
};
int main()
{
  int n,x,j,pos;
  struct node *temp,*p,*q,*t,*l,*m,*z,*a,*b,*c,*d,*e,*start=NULL;
  printf("\n Enter the number of nodes in the link list ");
  scanf("%d",&n);
  printf("\n Enter 1 for creation \n 2 for insertion \n 3 for deletion\n ");
scanf("%d",&x);
  switch(x)
  {
    case 1:
    for(int i=0;i<n;i++)
    {
      temp=(struct node *)malloc(sizeof(struct node));
      printf("\nEnter the data  ");
      scanf("%s %f %d",temp->st,&temp->val,&temp->data);
      temp->next=start;
      if(start==NULL)
      {
        start=temp;
        p=temp;

      }
      else
      {
        p->next=temp;
        p=temp;

      }
    }

    q=start;
    printf("\n Details are\n");
    do
    {
      printf("%s %5.2f %d\n",q->st,q->val,q->data);
      q=q->next;
    }while(q!=start);
    break;
    case 2:
    for(int i=0;i<n;i++)
    {
      temp=(struct node *)malloc(sizeof(struct node));
      printf("\nEnter the data  ");
      scanf("%s %f %d",temp->st,&temp->val,&temp->data);
      temp->next=start;
      if(start==NULL)
      {
        start=temp;
        p=temp;
      }
      else
      {
        p->next=temp;
        p=temp;
      }
  }
  printf("\n Enter 1 for the node to be added at beginning \n 2 for node to be inserted at last \n 3 for node to be inserted at any position \n");
scanf("%d",&j);
if(j==1)
{
    printf("\n Insertion at the beginning\n ");
  q=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data for the node to be inserted at the beginning ");
  scanf("%s %f %d",q->st,&q->val,&q->data);
  q->next=start;
  start=q;
  temp->next=start;
  t=start;
  printf("\n Details are\n");
  do
  {
    printf("%s %5.2f %d\n",t->st,t->val,t->data);
    t=t->next;
  }while(t!=start);
}
if(j==2)
{
    printf("\n Insertion at the end\n ");
    l=(struct node *)malloc(sizeof(struct node));
        l->next=start;
    printf("\nEnter the data for the node to be inserted at the last ");
    scanf("%s %f %d",l->st,&l->val,&l->data);
    m=start;
    while(m->next!=start)
    {
     m=m->next;
   }
    m->next=l;
    l->next=start;
   z=start;
    printf("\n Details are\n");
    do
    {
      printf("%s %5.2f %d\n",z->st,z->val,z->data);
      z=z->next;
}while(z!=start);
}
if(j==3)
{
  printf("\n Insertion at a given position \n ");
  a=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data for the node to be inserted at the last ");
  scanf("%s %f %d",a->st,&a->val,&a->data);
  printf("\n Enter the position at which the node is to be inserted  ");
  scanf("%d",&pos);
  b=start;
  for(int i=0;i<pos-1;i++)
  {
    b=b->next;
  }
  a->next=b->next;
  b->next=a;
  e=start;
  printf("\n Details are\n");
  while(e!=NULL)
  {
    printf("%s %5.2f %d\n",e->st,e->val,e->data);
    e=e->next;
  }
}
  break;
case 3:
{
  for(int i=0;i<n;i++)
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data  ");
  scanf("%s %f %d",temp->st,&temp->val,&temp->data);
  temp->next=start;
  if(start==NULL)
  {
    start=temp;
    p=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
printf("\n Enter 1 for the node to be deleted at beginning \n 2 for node to be deleted at last \n 3 for node to be deleted at any position \n");
scanf("%d",&j);
if(j==1)
{
  p=start;
  start=start->next;
  free(p);
  t=start;
  printf("\n Details are \n");
  do
  {
    printf("%s %5.2f %d\n",t->st,t->val,t->data);
    t=t->next;
}while(t->next!=start);
}
else if(j==2)
{
    p=start;
    while(p->next->next!=start)
    {
      p=p->next;
    }
    free(p->next);
    p->next=start;
    t=start;
    printf("\n Details are \n");
    do
    {
      printf("%s %5.2f %d\n",t->st,t->val,t->data);
      t=t->next;
}while(t!=start);
}
else if(j==3)
{
  printf("\n Enter the position at which the node is to be deleted  ");
  scanf("%d",&pos);
  p=start;
  for(int i=1;i<pos-1;i++)
  {
    p=p->next;
  }
  temp=p->next;
  p->next=p->next->next;
  free(temp);
  t=start;
  printf("\n Details are \n");
  while(t!=NULL)
  {
    printf("%s %5.2f %d\n",t->st,t->val,t->data);
    t=t->next;
  }
 }
 }
 }
 }
