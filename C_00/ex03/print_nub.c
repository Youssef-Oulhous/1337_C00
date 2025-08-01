#include <unistd.h>

void	print_num(char c)
{
	write(1, &c, 1);
}

void	num(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		print_num(i);
		i++;
	}
}

int	main(void)
{
	num();
	return (0);
}
