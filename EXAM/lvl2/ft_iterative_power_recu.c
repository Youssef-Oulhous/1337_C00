#include <stdio.h>

int ft_iterative_power_recu( int nb , int pwr)
{

    if(pwr == 0) return 1 ;
    if(pwr < 0 ) return 0 ;

    return     nb  *  ft_iterative_power_recu(nb , pwr - 1) ;
}


int main ()
{
    int result = ft_iterative_power_recu(3, 3);
    printf("%d" , result);

    return 0 ;
}
