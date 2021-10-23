main()
{
    float p,c,b,m,cs,per;
    printf("Enter marks of 5 subjects physics, chemistry,biology,maths,computer science ");
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cs);
    per=(p+c+b+m+cs)/5;
    if(per>=90.0)
      {
          printf("Grade A");
          }
    else if(per>=80.0)
    printf("Grade B");
    else if(per>=70.0)
     printf("Grade C");
    else if(per>=60.0)
        printf("Grade D");
    else if(per>=50.0)
        printf("Grade E");
    else if(per>=40.0)
        printf("Grade F");
    else
        printf("Fail");
}
