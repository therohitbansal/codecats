main()
{
int n,n1=0;
printf("Enter a number");
scanf("%d",&n);
n1=n1+n/2000;
n=n%2000;
n1=n1+n/500;
n=n%500;
n1=n1+n/200;
n=n%200;
n1=n1+n/100;
n=n%100;
n1=n1+n/50;
n=n%50;
n1=n1+n/20;
n=n%20;
n1=n1+n/10;
n=n%10;
n1=n1+n/5;
n=n%5;
n1=n1+n/2;
n=n%2;
n1=n1+n/1;
n=n%1;
printf("Notes are %d",n1);
}
