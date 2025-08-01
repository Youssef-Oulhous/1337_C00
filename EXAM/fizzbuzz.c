#include <unistd.h>

char ft_putchar(char c){

	write(1,&c,1);
	
}


void ft_print_char ( char *str ){
	
	int i = 0 ;
	
	while( str[i] != '\0'){
	
		ft_putchar(str[i]);
		i++;		
	}

}

void ft_print_num(int x){

	if( x > 9 ){
		ft_putchar ( x / 10 + '0');
		ft_putchar( x % 10 + '0' );
	}
	else 	
	ft_putchar( x  +'0' );
}


void  ft_fizzbuzz(){
	
	int x = 1 ;
	
	while( x < 100){
		
		if( x % 3 == 0 ){
		
			ft_print_char("fizz");
			
		} else if ( x % 5 == 0){
		
			ft_print_char("buzz");
			
		} else if ( x % 3 == 0 && x % 5 == 0 ){
		
			ft_print_char("fizz buzz");
			
		} else {
		
			ft_print_num(x);
			
		}
		ft_putchar('\n');
		x++ ;
		
		
	
		
	}
	
}



int main(){

	ft_fizzbuzz();
	return 0 ;
}
