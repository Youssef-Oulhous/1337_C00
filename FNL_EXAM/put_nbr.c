#include <unistd.h>

void print(char v){
    write(1,&v,1);
}

void ft_nbr( int x )
{
    if(x == -2147483648 ){
        write(1, "-2147483648",11);
        return ;
    }

    if(x < 0 ){
        write(1,"-",1);
        x = -x ;
    }

    if(x >= 10){
        ft_nbr(x / 10);
        ft_nbr( x % 10);
    }
    else {
        char c = x + '0' ;
        write(1,&c,1);
    }

}

int main ()
{

    ft_nbr(-2147483);
    return 0 ;

}
