#include <unistd.h>

void ft_char(char c)
{
    write( 1, &c ,1);
}

int main ( int argc , char **argv )
{
    char nm[] = "";
    int i = 0 ;
    int j = 0 ;
    if ( argc >= 1){

        while( argv[1][i] )
        {
            nm[i] = argv[1][i] ;
           i++ ;
        }
    }

    while(nm[j])
    {
       ft_char(nm[j]);
       j++ ;

    }

    return 0 ;
}
