main()
{
    int a,b,c,d;
    printf("Enter a,b,c of quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Real and non equal");
    }
    else if(d==0)
    {
        printf("real and equal");
    }
    else
        printf("Imaginary");


}
