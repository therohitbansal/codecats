#include<stdio.h>
void len_of_str(char *c)
{
    int n=0;

for(int i=0;c[i];i++)
{
    n++;
}
printf("Length of string %d",n);
}
int main()
{  
    char c[]="Rohit Bansal";
    len_of_str(c);
    
}