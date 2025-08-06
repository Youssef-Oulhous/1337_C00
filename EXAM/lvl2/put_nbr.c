#include <unistd.h>

void ft_char(char c){
    write(1 , &c , 1);
}

void put_nbr (int nb)
{
    if(nb == -2147483648){
        write(1,"-",1);
        put_nbr(2);
        put_nbr(147483648);
    }
    if( nb < 0){
        write(1,"-",1);
        nb = - nb ;
        put_nbr(nb);
    }
    if(nb > 9 ){
        put_nbr(nb / 10);
    }

    ft_char(nb % 10 + '0');
}

int main(){

    put_nbr(2005);

    return 0 ;
}
