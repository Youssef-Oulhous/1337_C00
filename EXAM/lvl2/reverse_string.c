#include <unistd.h>

void print(char v){
    write(1,&v,1);
}


void reverse_string( char *s1 , char * s2)
{

    int s1_len = 0 ;
    int s2_len = 0 ;



    while( s1[s1_len] ){
        s1_len++;
    }

    while(s2[s2_len]){
        s2_len++;
    }

    int i = s1_len - 1  ;
    int k = s2_len - 1 ;

    while(k >= 0){
        print(s2[k]);
        k--;
    }

    while(i >= 0){
        print(s1[i]);
        i--;
    }
}

int main () {

    char s1[] = "1234";
    char s2[] = "5678";

    reverse_string(s1, s2);

    return 0 ;
}
