#include <stdio.h>

int ft_iterative_factorial(int num)
{
    int result = 1  ;
    if (num < 0 ) return 0 ;

    while(num > 0 )
    {
        result = result * num ;
        num -- ;
    }

    return result ;
}

int main ()
{
   int result = ft_iterative_factorial(5);
   printf("%d",result);

   return 0 ;
}
