
int ft_n ( char * x){

	int len = 0;
	
	while(x[len] != '\0'){
		len++ ;
	}
	
	return (len);	

}



void is_base_valid(char *base){

	int i = 0 ;
	int len = ft_n(base);
	
	if (len < 2) return 0 ;
	
	while( i < len ){
	
		if(base[i] == '+' || base[i] == '-'){
			return 0 ;
		}
		
		int j = i + 1 ;
		
		while(j < len) {
			
			if(base[i] == base[j])	return (0);
			
			j++ ;
			
		}
		
		i++; 
	}
	
	return (1);
	
}

void recursive_putnbr( long nbr , char *base , int base_len ){

	char digit_to_print ;
	
	if( nbr >= base_len  ){
	
		recursive_putnbr( nbr / base_len , base , base_len);
	
	}
	
	digit_to_print = base[nbr % base_len];
	
	write(1 , &digit_to_print , 1);

}


void ft_putnbr_base(int nbr, char *base){

	
	if( !is_base_valid(base)) return ;
	
	int base_len;
	long long_nbr ;
	
	base_len = ft_n(base);
	nbr = long_nbr ;
	
	if(long_nbr < 0){
		write(1,'-',1);
		long_nbr = -long_nbr ;
		
	}

	recursive_putnbr(long_nbr, base, base_len);
}





