#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0 ;
    while(src[len] != '\0')
    {
       len++;
    }

    char *copy ;
    copy = (char *)malloc(len + 1);

    if (copy == NULL) return (NULL);

    int i = 0 ;

    while(src[i])
    {
        copy[i] = src[i] ;
        i++ ;
    }
    copy[i] = '\0';
    return (copy) ;
}
