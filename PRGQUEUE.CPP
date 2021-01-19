#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define sz 5
int front=-1,rear=-1;
void enqueue(int *q)
{
if(front==(rear+1)%sz)
{
printf("\n queue is full \n");
return;
}
if(front==-1)
front=0;
rear=(rear+1)%sz;
printf(" \n enter the element want to insert:");
scanf("%d",&q[rear]);
}
void dequeue(int *q)
{
if(front==-1)
{
printf("\n queue is empty") ;
return;
}
printf("\n deleted element is %d \n",q[front]);
 if (front==rear)
front=rear=-1;
else
front=(front+1)%sz;
return;
}
void search(int *q)
{
int f,x,pos;
if(front==-1)
{
printf("\n queue is empty");
return;
}
printf("\n enter the element want tosearch:\n");
scanf("%d",&x);
f=front;
pos=1;
while(1)
{
if(q[f]==x)
{
printf("\n element found at location:%d \n",pos);
break;
}
if(f==rear)
{
printf(" \n element not found \n");
break;
}
f=(f+1)%sz;
pos=pos+1;
}
}
void display(int *q)
{
int f;
if(front==-1)
{
printf("\n queue is empty");
return;
}
f=front;
while(1)
{
printf("  \n the elements are :%d \n",q[f]);
if(f==rear)
break;
f=(f+1)%sz;
}
}

void main()
{
int choice,q[sz];
clrscr();
while(1)
{
printf("**********MENU********");
printf("\n 1.insert \n 2.delete \n 3.search \n 4.display \n 5.exit\n ");
printf("\n enter the choice:");
scanf(" \n %d",&choice);
switch(choice)
{
case 1:enqueue(q);
break;
case 2:dequeue(q);
break;
case 3:search(q);
break;
case 4:display(q);
break;
case 5:
exit(1);
default:
printf("\n please given a valid choice");

break;
}
}
}