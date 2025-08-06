#include <stdio.h>

void rotone( char * str)
{
    int i = 0 ;

    while(str[i])
    {
        if(str[i] == 'z'){
                str[i] = 'a';
        }

        if(str[i] == 'Z'){
                str[i] = 'A';
        }

        if( ( str[i] >= 'a' && str[i] <= 'y' ) || ( str[i] >= 'A' && str[i] <= 'Y' )  ){
            str[i] = str[i] + 1 ;

        }

        i++;
    }
}

int main (){

    char    str[] = "Hello I am !";

    rotone(str);

    printf("%s",str);

    return 0 ;
}
