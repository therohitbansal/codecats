#include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main(){
    int a,b;
    printf("Enter two numbers to swap");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}