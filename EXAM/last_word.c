#include <unistd.h>


int main ( int argc , char **argv)
{

	if(argc == 2 ){
		
		
		int i = 0 ;
		
		while( argv[1][i] != '\0'){
			i++ ; 
		}
		
		i-- ;
		
		while(argv[1][i] != 0 ){
		
			while( i >= 0  &&( argv[1][i] == ' ' || argv[1][i] == '\t' ) ){
			
				i-- ;
				
			} 
			
			while ( i >= 0  && argv[1][i] != ' ' && argv[1][i] != '\t' ) {
				
				i-- ;
			}
			
			int new_word = i + 1 ;
			
			while(argv[1][new_word] != '\0' && argv[1][new_word] != ' ' && argv[1][new_word] != '\t' ){
			
				write(1, &argv[1][new_word],1);
				new_word++ ;
				
			}
			
			break ;
				
		}
		
	}
	
	write(1,"\n",1);
	return 0 ;

}
