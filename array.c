#include<stdio.h>
void main()
{
int i,n,a[10];
printf("Enter the value for n:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The numbers are:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
