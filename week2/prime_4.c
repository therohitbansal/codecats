main()
{
    int num,flag=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++)
    {
        if(num%2==0)
            flag =1;
        break;
    }
    if (flag==0){
        printf("%d is a prime number",num);
    }
        else
        printf("%d is not a prime number",num);
}
