#include <stdio.h>

int ft_strcspn (char *s1 , char *s2)
{
    int len = 0 ;
    int i ;

    while(s1[len]){
        i = 0 ;

        while(s2[i]){

            if(s1[len] == s2[i]){
                return len ;
            }
            i++;
        }
        len++;

    }

    return len;
}

int main ()
{

    char s1[] = "Amount:25.00" ;
    char s2[] = ":.!$" ;

    int re = ft_strcspn(s1,s2);

    printf("%d" , re);

    return 0 ;
}
