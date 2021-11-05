#include<stdio.h>
int main()
{
    int n,x,sum=0,even_sum=0,odd_sum=0,seq_even=0,seq_odd=0;
    scanf("%d",&x);
    n=x-1;
int a[n];
for(int i=0;i<=n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<=n;i++){
sum=sum+a[i];
if(a[i]%2==0)
{
even_sum=even_sum+a[i];
}
else 
odd_sum=odd_sum+a[i];
}
for(int i=0;i<=n;i+=2)
{
    seq_even=seq_even+a[i];

}
for(int i=1;i<=n;i+=2)
{
    seq_odd=seq_odd+a[i];
}
printf("%d\n",sum);
printf("%d\n",even_sum);
printf("%d\n",odd_sum);
printf("%d\n",seq_even);
printf("%d",seq_odd);
}