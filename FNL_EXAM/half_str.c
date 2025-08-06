#include <unistd.h>

void print(char v){
    write(1,&v,1);
}

int main (int argc , char **argv)
{

    int ar = argc ;
    int i = 0 ;
    int gv = 1 ;

    if(argc > 1){

        while(gv <= ar - 1 ){

            i = 0 ;
            while(argv[gv][i]){
                print(argv[gv][i]);
                i = i + 2 ;
            }
            write(1,"\n",1);
            gv++;
        }

    } write(1,"\n",1);

    return 0 ;
}
