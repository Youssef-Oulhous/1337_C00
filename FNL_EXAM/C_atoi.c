#include <stdio.h>

int atoi(char * str)
{
    int i = 0 ;
    int sign = 1 ;
    int sign_nb = 0;
    int result = 0 ;

    while( (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ) ){
        i++;
    }

    while(str[i] == '+' || str[i] == '-' ){

        if(sign_nb >= 1){
            return 0 ;
        }
        else{
            if(str[i] == '-'){
                sign = sign * -1 ;
                sign_nb++;
            }else{
                sign = sign * 1 ;
                sign_nb++;
            }
            i++;
        }
    }

    while(str[i] >= '0' && str[i] <= '9'){
        result = ( result * 10 ) + (str[i] - '0');
        i++;
    }

    return (sign * result);
}

int main(){


	char str[] = " -128,34,5abc" ;

	int res = atoi(str);

	printf("%d",res);

	return 0 ;

}
