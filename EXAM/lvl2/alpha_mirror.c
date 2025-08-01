#include <unistd.h>

int main ( int argc , char **argv )
{
    int i = 0 ;
    if (argc == 2)
    {

        while(argv[1][i])
        {
            while(argv[1][i] >= '0' && argv[1][i] <= '9')
            {
                i++;
            }
            while(argv[1][i] >= 'a' && argv[1][i] <= 'z' || argv[1][i] >= 'A' && argv[1][i] <= 'Z' ){

                if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                {
                    argv[1][i] = ('a' + 'z') - argv[1][i] ;
                    write(1, &argv[1][i] ,1);
                    i++;
                } else{
                    argv[1][i] = ('A' + 'Z') - argv[1][i] ;
                    write(1, &argv[1][i] ,1);
                    i++;
                }
            }
            while(argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t')
            {
                write(1, &argv[1][i] ,1);
                i++ ;
            }
        }
    }
    write(1, "\n" ,1);

    return 0 ;
}
