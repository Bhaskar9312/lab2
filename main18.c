#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three nos. :");
    scanf("%d%d%d",&a,&b,&c);

   int max =  (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
   printf("The largest number is: %d",max);

   
}
