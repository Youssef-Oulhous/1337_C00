#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0 ;
    int len = 0;
    char temp ;

    if(str[i] == '\0')  return (str) ;

    while(str[len] != '\0')
    {
        len++;
    }

    len -- ;


        while(i < len)
        {
            temp = str[i] ;
            str[i] = str[len];
            str[len] = temp ;

            i++;
            len--;
        }

    return (str + 0) ;

}

int main ()
{
    char str[50] = "geeksforgeeks";
    char *result = ft_strrev(str);

    printf("%s" , (char *)result);


}
