main()
{
    int year;
    printf("Enter any year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("Leap year");
        else
            printf("Non leap year");
    }
    else
        if(year%4==0)
        printf("leap year");
        else
            printf("Non leap year");
}
