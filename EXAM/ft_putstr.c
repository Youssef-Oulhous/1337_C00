#include <unistd.h>

char ft_putchar(char c ){
	write(1,&c,1);
}

void	ft_putstr(char *str){

	int i = 0 ;
	
	while(str[i] != '\0'){
		
		ft_putchar(str[i]);
		i++ ;
	}

}


int main(){

	char string[] = "Hello Khadija ";
	
	char *str = &string[0] ;
	
	ft_putstr(str);
	

}
