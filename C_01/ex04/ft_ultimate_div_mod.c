#include <unistd.h>


void ft_ultimate_div_mod(int *a, int *b){
	int tmpa = *a ;
	int tmpb = *b ;
	
	if(!(*b == 0)){
		
		*a = tmpa / *b ;
		*b = tmpa % *b ;
	}

}
