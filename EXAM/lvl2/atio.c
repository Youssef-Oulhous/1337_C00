#include <stdio.h>

int ft_atio(char * str){

    int i = 0 ;
    int result = 0 ;
    int sign = 1 ;


        while(str[i] == '\t' || str[i] == ' ' || str[i] == '\r')    i++;

        while(str[i] == '+' || str[i] == '-'){
            if(str[i]=='-') sign *= -1 ;
            i++;
        }

        while(str[i] >= '0' && str[i] <= '9'){
            result = (result * 10 ) + (str[i] - '0');
            i++ ;
        }


    return (result * sign);
}

int main(){
    char str[10] = "-+1234a5";
     int result = ft_atio(str);

     printf("%d",result);

     return 0 ;
}
