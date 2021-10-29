main()
{
    int num,x=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        x=(x*10+num%10);
        num=num/10;
    }
    printf("%d",x);
}
