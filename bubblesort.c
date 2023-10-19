#include<stdio.h>
void main()
{
int i,j,n,a[10],temp;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<=n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}}
printf("Sorted array is");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
