#include<stdio.h>


int main ()
  
{ int n= 5; 
    for(int i=1;i<=n;i++ )
    {
     for(int j=i;j<=n-1;j++)
        { 
         printf("  ");
        }
    for(int k=1;k<=i;k++)
        {
        printf("* ");
        }
         printf("\n");
    }
        


}