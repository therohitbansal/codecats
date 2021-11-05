#include<stdio.h>
int main()
{
int n,x,count=0,num;
scanf("%d",&x);
n=x-1;
int a[n];
for(int i=0;i<=n;i++)
{
    scanf("%d",&a[i]);
}
scanf("%d",&num);
for(int i=0;i<=n;i++){
if(num==a[i])
count++;
}
printf("total number of occurence of %d is %d",num,count);
}