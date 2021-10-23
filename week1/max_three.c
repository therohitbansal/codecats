main(){
int a,b,c,x,y;
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
x=max(a,b);
y=max(x,c);
printf("Max is : %d",y);
}
int max(int p,int q)
{
    if(p>q)
         return p;
        else
        return q;
}
