#include<stdio.h>
int main()
{
    int n,t ;
    scanf("%d",&t);
  while(t>0){
      int x=0;
    scanf("%d",&n);
   while(n/5!=0)
   {
       x=x+n/5;
       n=n/5;
   }
   printf("%d\n",x);
   t--;
   }
return 0;
}