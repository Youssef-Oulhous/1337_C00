#include <unistd.h>

void alph () {

    int i = 0 ;
    char apl ;

    while(i < 26){

        if (i % 2 == 0 ){
            apl = 'A' + i ;
        }
        else{
            apl = 'a' + i ;
        }
        write(1,&apl,1);
        i++;
    }

}

int main ()
{
    alph();
    return 0 ;
}
