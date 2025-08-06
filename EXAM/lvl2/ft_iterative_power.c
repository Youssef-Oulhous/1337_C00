#include <stdio.h>

int ft_iterative_power (int nb , int pwr)
{
    int result = 1 ;
    int i = pwr ;
    if(pwr == 0) return nb ;
    if(nb == 0 ) return 0 ;

    while (i > 0){
        result = result * nb ;
        i-- ;
    }

    return result ;
}

int main(){

    int result = ft_iterative_power(5,7);
    printf("%d", result);

    return 0 ;
}
