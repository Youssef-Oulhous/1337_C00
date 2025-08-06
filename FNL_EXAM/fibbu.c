#include <stdio.h>
#include <unistd.h>

int fibu (int nb){
    if (nb < 0) return -1 ;
    if(nb == 0 ) return 0 ;
    if(nb == 1 ) return 1 ;

    return (fibu(nb - 1) + fibu(nb - 2));

}

int main ()
{
    int resu = fibu(5);

    printf("%d",resu);

    return 0 ;

}
