 main()
 {
    int w;
    printf("Enter number of week starting from monday");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
       printf("Monday");
     break;
    case 2:
        printf("Tuesday");
    break;
    case 3:
        printf("Wednesday");
    break;
    case 4:
        printf("Thursday");
    break;
    case 5:
        printf("Friday");
    break;
    case 6:
        printf("Saturday");
    break;
    case 7:
        printf("Sunday");
    default:
        printf("please enter a correct number");
 }
}
