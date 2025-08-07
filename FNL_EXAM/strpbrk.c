#include <stdio.h>
char *ft_strpbrk (char *s1 , char *s2)
{
    int i = 0 ;
    int j ;
    while( s1[i] ){

         j = 0 ;
         while(s2[j]){

            if(s1[i] == s2[j] ){
                 return (s1 + i);
            }
            j++;
        }

        i++;
    }

    return (NULL) ;
}


int main ()
{
    char s1[] = "abcdefgh";
    char s2[] = "e";
    char *result ;

    result = ft_strpbrk(s1,s2);
    printf("%s",result);


    return 0 ;
}
