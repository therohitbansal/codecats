main()
{
    int n,x=0;
    printf("Enter a number");
    scanf("%d",&n);
    x=fact(n);
    printf("The factorial of %d is : %d\n",n,x);
    }
int fact (int y)
{
    int f;
    for(f=1;y!=1;y--)
    {
        f=f*y;
    }
        return f;
}
