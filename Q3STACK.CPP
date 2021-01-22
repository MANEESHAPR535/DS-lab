#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void search();
void display();
struct node
{
int val;
struct node*next;
};
struct node*head;
void main()
{
int choice=0;
clrscr();
while(choice!=5)
{
printf("MENU\n");
printf("\n 1.push \n 2.pop \n 3.search \n 4.display\n 5.exit \n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
search();
break;
case 4:
display();
break;
case 5:
printf("exiting");
break;
default:
{
printf("\n please enter vaild choice") ;
}
};
}
}
void push()
{
int val;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("not able to push");
}
else
{
printf("\n enter the number:\n");
scanf("%d",&val);
}
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("item pushed:\n");
}
void pop()
{
int val;
struct node*ptr;
if(head==NULL)
{
printf("\nunderflow");
}
else
{
val=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("item popped:\n");
}
}
void search()
{
int x;
int pos;
struct node*ptr;
printf("enter the element to search\n");
scanf("%d",&x);
if(head==NULL)
{
printf("stack is empty\n");
return;
}
ptr=head;
pos=0;
while(ptr!=NULL)
{
if(ptr->val==x)
{
printf("found the value%d at posion %d\n",x,pos);
return;
}
ptr=ptr->next;
pos=pos+1;
}
if(ptr==NULL)
{
printf("element not found");
}
}
void display()
{
int i;
struct node*ptr;
ptr=head;
if(ptr==NULL)
{
printf("stack is empty");
}
else
{
printf(" stack element:\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->val);
ptr=ptr->next;
}
}
}
