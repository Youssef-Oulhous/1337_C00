#include <unistd.h>

int main ( int argc , char **argv)
{
    int len = 0 ;
    if(argc == 2)
    {

        while(argv[1][len]) len ++ ;

        if(argv[1][0] == '\0')
            write( 1, "\n" ,1);

        else if(len == 1)
        {
            write( 1, &argv[1][0] ,1);
            write( 1, &argv[1][0] ,1);

            write( 1, "\n",1);
        } else if(len >= 2)
        {
            write( 1, &argv[1][0] ,1);
            write( 1, &argv[1][len - 1] ,1);

            write( 1, "\n" ,1);
        }

    }
    else {
        write( 1, "\n" ,1);
    }


    return 0 ;
}
