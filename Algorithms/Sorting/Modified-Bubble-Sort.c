#include<stdio.h>
void swap(int *b,int *c)
{
int x;
x=*b;
*b=*c;
*c=x;
}
void main ()
{
int a[10],i,j,flag,n;
printf("enter the unsorted elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    flag=0;
for(j=0;j<4-i;j++)
{
    if(a[j]>a[j+1])
    {
        flag=1;
        swap(&a[j],&a[j+1]);
    }
    }
if(flag==0)
    break;
}
printf("sorted elements are\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
