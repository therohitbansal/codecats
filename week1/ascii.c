main()
{
    char c;
    printf("Enter any character");
    scanf("%c",&c);
    int x=c;
    switch(x)
    {
    case 48 ... 57:
        printf("It is a number");
    break;
    case 65 ... 90:
        printf("it is character from capital alphabet");
    break;
    case 97 ... 122:
        printf("It is a character from a small alphabet");
        break;
    default:
        printf("It is a special character");
    }

}
