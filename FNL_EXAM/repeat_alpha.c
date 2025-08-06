#include <unistd.h>

int main (int argc , char **argv )
{
    int i = 0 ;
    if (argc == 2)
    {
        while(argv[1][i]){

            int re_co = 1 ;

            if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z') ){

                if((argv[1][i] >= 'a' && argv[1][i] <= 'z')){
                    re_co = (argv[1][i] - 'a') + 1 ;
                }else{
                    re_co = (argv[1][i] - 'A') + 1 ;
                }
            }
            int j = 0 ;

            while(j < re_co){
                write(1,&argv[1][i],1);
                j++;
            }
            i++;

        }
    }

    write(1,"\n",1);
    return 0 ;


}
