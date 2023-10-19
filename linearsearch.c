#include<stdio.h>
void main()
{
int a[50],i,n,key,f=0;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key:");
scanf("%d",&key);
for(i=0;i<=n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("Elements found");
}
else
{
printf("Elements are not found");
}
}
