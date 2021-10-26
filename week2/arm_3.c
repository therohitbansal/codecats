#include<math.h>
main()
{
    int i=0,num,x=0,y,p=0,q=0,old_num;
    printf("Enter a number");
    scanf("%d",&num);
    x=num;
    old_num=num;
    while(num)
    {
        num=num/10;
        i++;
    }
   for(y=1;y<=i;y++)
    {
        p=x%10;
        x=x/10;
        q=q+pow(p,i);

    }
if(old_num==q){
    printf("%d is a armstrong Number",old_num);
}
else
    printf("%d is not a armstrong number",old_num);
}
