main()
{
int n,x=0,a[10]={1,2,5,10,20,50,100,200,500,2000},i;
printf("Enter rupee");
scanf("%d",&n);
for(i=9;i>=0;i--)
{
    x=x+n/a[i];
    n=n%a[i];
}
printf("Number of notes are =%d",x);
}
