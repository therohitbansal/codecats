main()
{
int a,b,z=1;
printf("Enter base and power\n");
scanf("%d %d",&a,&b);
for(int i=1;i<=b;i++)
{
    z=z*a;

}
printf("%d ^ %d is %d",a,b,z);
}
