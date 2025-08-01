#include <stdio.h>

int ft_atio(char *str)
{
    int i = 0 ;
    int result = 0 ;
    int sign = 1 ;


    while(str[i] != '\0')
    {
        if(str[i] == '+' || str[i] == '-'){

            if(str[i] == '-'){
                sign *= -1 ;
            }
            i++;
        }

        if(str[i] == '\t' || str[i] == '\r' || str[i] == ' ') i++ ;

        if(str[i] >= '0' &&  str[i] <= '9')
        {
            result = (result * 10) + str[i] - '0' ;
            i++;
        }
    }
    return (result * sign);
}


int main ( int argc , char **argv )
{
    int i = 0;
    if (argc == 4)
    {
        int int1 = ft_atio(&argv[1][0]);
        int int2 = ft_atio(&argv[3][0]);
        int result ;

        if(argv[2][i] == '+'){
            result = int1 + int2 ;
        }

        else    if(argv[2][i] == '-'){
            result = int1 - int2 ;
        }

        else    if(argv[2][i] == '*'){
            result = int1 * int2 ;
        }

        else    if(argv[2][i] == '/'){
            result = int1 / int2 ;
        }

        else    if(argv[2][i] == '%'){
            result = int1 % int2 ;
        }

        printf("%d",result);
    }

    printf("\n");
}
