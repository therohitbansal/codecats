#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("Enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
     {
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
     }
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        printf("Largest number is %d\n",a[n-1]);
        printf("Second largest element is %d\n",a[n-2]);
        printf("Smallest element is %d\n",a[0]);
        printf("Second smallest element is %d\n",a[1]);            
}
