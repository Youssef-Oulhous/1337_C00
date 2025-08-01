#include <unistd.h>

char ft_putchar(char c){
	write(1,&c,1);
}

void ft_print_num(int x) {
	
	ft_putchar(x % 10 + '0');
	
}

void ft_swap( int *a , int  *b ){

 	int	tmp  = 0 ;
 	
 	tmp = *a ;
 	*a = *b ;
 	*b = tmp ;

}


int main (){

	int a = 5 ;
	int b = 9 ;
	
	ft_print_num(a);
	ft_print_num(b);
	
	int *p = &a ;
	int *x = &b ;
	
	ft_swap( p , x );
	
	
	ft_print_num(a);
	ft_print_num(b);
	
	
}
