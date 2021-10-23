main()
{
    int gross_salary,basic_salary,hra,da;
    printf("Enter salary");
    scanf("%d",&basic_salary);
    if(basic_salary<=10000)
    {
        hra=(20*basic_salary)/100;
        da=(80*basic_salary)/100;
        gross_salary=basic_salary+hra+da;
        printf("Gross Salary=%d",gross_salary);
    }

    else if(basic_salary<=20000)
    {
        hra=(25*basic_salary)/100;
        da=(90*basic_salary)/100;
        gross_salary=basic_salary+hra+da;
        printf("Gross Salary=%d",gross_salary);
    }

    else if(basic_salary>=10000)
    {
        hra=(30*basic_salary)/100;
        da=(95*basic_salary)/100;
        gross_salary=basic_salary+hra+da;
        printf("Gross Salary=%d",gross_salary);
    }
}
