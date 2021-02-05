#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c[100],n1,n2;
int i,j,k=0;
clrscr();
printf("enter the size of first arry:");
scanf("%d",&n1);
printf("enter the ele:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the size of the 2nd array:");
scanf("%d",&n2);
printf("enter the ele:\n");
for(j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
j++;
}
else
{
c[k]=b[j];
j++;
i++;
}
k++;
}
while(i<n1)
{
c[k]=a[i];
i++;
k++;
 }
while(j<n2)
{
c[k]=b[j];
k++;
j++;
}
printf("after merging:\n");
for(i=0;i<k;i++)
{
printf("%d\n",c[i]);
}
getch();
 }