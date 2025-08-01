#include <unistd.h>

char print(char c )
{
	write(1,&c,1);
}
void ft_print( int *x , int size )
{

	int i = 0 ;
	while(	i < size - 1 ){
		
		char c =  x[i] + '0' ;
		write(1,&c,1);
		i++ ;
	}

}


void ft_rev_int_tab( int *tab , int size){

	int i = 0 ; 
	int l = size - 1 ;
	int tmp ;
	
			while( i < l){
				
				tmp = tab[i] ;
				tab[i] = tab[l];
				tab[l] = tmp ;
				
				
				i++;
				l--;
								
			}
			
	ft_print( tab , size);
}


int main(){

	int tab[] = {1,2,3,9,4,5,1};
	
	ft_rev_int_tab( tab , 7 );

	 
	 return 0 ;
	

}


