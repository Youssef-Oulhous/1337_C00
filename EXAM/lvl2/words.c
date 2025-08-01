#include <stdio.h>

int ft_words (char * str)
{

    int i = 0 ;
    int cnt = 0 ;
    while( str[i] != '\0' )
    {

        if(str[0] == ' ' || str[0] == '\t' || str[0] == '\r') i ++ ;

        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9') i++ ;

        else{
                cnt++ ;
                i++;
        }
    }

    if(str[i-1] == ' ') cnt--;

    cnt++ ;
    return cnt ;
}

int main()
{

    char str[] = "hello word,how are ";
    int words =  ft_words(str);

    printf("%d", words);
    return 0 ;
}
