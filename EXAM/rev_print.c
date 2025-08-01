#include <unistd.h>


int main( int argc , char **argv ){
	
	
	
	if( argc == 2){
	
		int d = 0 ;
		
		
		while( argv[1][d] != '\0' ){
			d++;
		}
		
		
		while(d > 0 ){
			
			d-- ;		
			write(1,&argv[1][d],1);
 				
		}
		
	}
	
	write(1,"\n",1);

	return(0);
}
