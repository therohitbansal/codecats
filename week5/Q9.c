#include<stdio.h>
void sum(int *ar,int *s){
    printf("Enter numbers");
    for(int i=0;i<10;i++){

scanf("%d",&ar[i]);
}
for(int i=0;i<10;i++)
{
    *s=*s+ar[i];
}
printf("Sum of all elements is %d",*s);
}
int main()
{
    int arr[10],s=0;
    sum(arr,&s);
    
}