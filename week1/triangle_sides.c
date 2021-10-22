main()
{
    int a,b,c,x;
    printf("Enter three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    printf("Please select a option from following\n");
    printf("1.For check Isosceles \n 2.For check right angle triangle\n 3.For check equilateral triangle \n 4.Exit");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf(a==b||b==c||a==c?"Isosceles triangle":"Non isosceles triangle");
                break;
        case 2:
         printf(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b?"Right angle triangle":"Not a right angle triangle");
                break;
        case 3:
           printf(a==b&&b==c?"Equilatrel triangle":"not equilatrel triangle");
        case 4:
            exit(0);
        }}
