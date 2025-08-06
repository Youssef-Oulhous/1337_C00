#include <stdio.h>

int atoi ( char *str )
{
    int i = 0 ;
    int sign = 1 ;
    int result = 0 ;


    while( (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ) ){
        i++;
    }

    while(str[i] == '-' || str[i] == '+'){
        if(str[i] == '-'){
            sign = sign * -1 ;
        }
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9'){
        result = (result * 10) + (str[i] - '0');
        i++;
    }

    return (result * sign );
}


int main(){


	char str[] = "  -+--+128,34,5abc" ;

	int res = atoi(str);

	printf("%d",res);

	return 0 ;

}
