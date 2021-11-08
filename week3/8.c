#include<stdio.h>
int main()
{
    int T,G,I,N,Q,R=0;
scanf("%d",&T);
while (T--)
{
scanf("%d",&G);
while(G--)
{
    scanf("%d %d %d",&I,&N,&Q);
R=N/2;
if((N&1)==0){
printf("%d\n",R);
}
else{
if(I==Q)
R=N/2;
else 
R=(N+1)/2;
printf("%d\n",R);
}
}
}
return 0;
}
