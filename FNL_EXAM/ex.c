#include <unistd.h>

void print(char v)
{
    write(1,&v,1);
}

void putnbr(int c){

    if(c > 9){
        putnbr(c / 10);
    }

    print( (c % 10) + '0');

}



void ex (){

    int i = 1 ;

    while( i <= 100){

        putnbr(i);
        write(1,"\n",1);

        if ( i + 1 <= 100){

            putnbr(i + 1);
            write(1,"\n",1);
            write(1,"\n",1);
        }
        i = i + 3 ;
    }

}


int main (){

    ex();

    return 0 ;
}
