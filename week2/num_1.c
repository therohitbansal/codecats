main()
{
int n,z=0,x=0,y=0;
printf("Enter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
        printf("%d\n",i);
    z=z+i;
    if((i&1)==0)
       x=x+i;
    else
        y=y+i;


}
printf("sum of all number is %d\n",z);
printf("Sum of all even number is %d\n",x);
printf("Sum of all odd number is %d",y);

}
