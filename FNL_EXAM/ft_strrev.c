
char    *ft_strrev(char *str){

    int i = 0 ;

    while(str[i]){
        i++ ;
    }
    i-- ;

    int j = 0 ;

    char tmp ;



    while(j < i){
        tmp = str[j] ;
        str[j] = str[i];
        str[i] = tmp ;

            i--;
            j++;
        }
    return (str);
}
