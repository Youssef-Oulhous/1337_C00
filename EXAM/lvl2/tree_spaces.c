#include <unistd.h>

int main ( int argc , char **argv)
{
    int len = 0 ;
    int i = 0 ;
    if(argc == 2 )
    {

        while(argv[1][len] != '\0') len++ ;

        while(argv[1][i])
        {
            if( i < len - 1){
                write( 1,&argv[1][i] ,1);
                write( 1, " ",1 );
                write( 1, " ",1 );
                write( 1, " ",1 );
                i++;
            }
            write(1,&argv[1][i],1);
            i++;
        }
    }

    write(1, "\n",1);

    return 0 ;

}
