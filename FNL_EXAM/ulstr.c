#include <unistd.h>


void ft_print(char v){
    write(1,&v,1);
}

int main ( int argc , char **argv)
{
    int i = 0 ;
    if(argc > 1 )
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] = argv[1][i] - 32 ;
                ft_print(argv[1][i]);
                i++;

            } else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' ){
                argv[1][i] = argv[1][i] + 32 ;
                ft_print(argv[1][i]);
                i++;
            }
            else{
                ft_print(argv[1][i]);
                i++;
            }
        }
    }

    write(1,"\n",1);

    return 0 ;

}
